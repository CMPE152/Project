#include "XBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/Typespec.h"
#include "backend/compiler/CodeGenerator.h"
#include "backend/compiler/ExpressionGenerator.h"
#include "backend/compiler/Compiler.h"
#include "intermediate/type/TypeChecker.h"

namespace backend { namespace compiler {

//change
void ExpressionGenerator::emitExpression(XParser::ExpressionContext *ctx){
    if(!ctx->expression().empty()){
        //Ternary expression
        Label* falseLabel = new Label;
        Label* doneLabel = new Label;

        //Evaluate truth expression
        compiler->visitExpression(ctx->expression(0));

        //Do comparison to see if expression is true
        emit(Instruction::ICONST_0);
        emit(Instruction::IF_ICMPEQ, falseLabel->getString());

        //Execute if True, Fall through to next
        compiler->visit(ctx->expression(1));
        emit(Instruction::GOTO,doneLabel->getString());

        emitLabel(falseLabel);
        compiler->visit(ctx->expression(2));

        //Jump to when done with true section so to skip false section
        emitLabel(doneLabel);
    }
    else {

        XParser::SimpleExpressionContext *simpleCtx1 =
                ctx->simpleExpression()[0];
        XParser::RelOpContext *relOpCtx = ctx->relOp();
        Typespec *type1 = simpleCtx1->type;
        emitSimpleExpression(simpleCtx1);

        // More than one simple expression?
        if (relOpCtx != nullptr) {
            string op = relOpCtx->getText();
            XParser::SimpleExpressionContext *simpleCtx2 =
                    ctx->simpleExpression()[1];
            Typespec *type2 = simpleCtx2->type;

            bool integerMode = false;
            bool realMode = false;

            if (TypeChecker::isIntegerOrChar(type1)
                && TypeChecker::isIntegerOrChar(type2)) {
                integerMode = true;
            } else if ((type1 == Predefined::realType)
                       || (type2 == Predefined::realType)) {
                realMode = true;
            }

            Label *trueLabel = new Label();
            Label *exitLabel = new Label();

            if (integerMode) {
                emitSimpleExpression(simpleCtx2);

                if (op == "==") emit(IF_ICMPEQ, trueLabel);
                else if (op == "!=") emit(IF_ICMPNE, trueLabel);
                else if (op == "<") emit(IF_ICMPLT, trueLabel);
                else if (op == "<=") emit(IF_ICMPLE, trueLabel);
                else if (op == ">") emit(IF_ICMPGT, trueLabel);
                else if (op == ">=") emit(IF_ICMPGE, trueLabel);
            } else if (realMode) {
                emitCast(type1, Predefined::realType);
                emitSimpleExpression(simpleCtx2);
                emitCast(type2, Predefined::realType);

                emit(FCMPG);

                if (op == "==") emit(IFEQ, trueLabel);
                else if (op == "!=") emit(IFNE, trueLabel);
                else if (op == "<") emit(IFLT, trueLabel);
                else if (op == "<=") emit(IFLE, trueLabel);
                else if (op == ">") emit(IFGT, trueLabel);
                else if (op == ">=") emit(IFGE, trueLabel);
            } else  // stringMode
            {
                emitSimpleExpression(simpleCtx2);
                emit(INVOKEVIRTUAL,
                     "java/lang/String.compareTo(Ljava/lang/String;)I");
                localStack->decrease(1);

                if (op == "=") emit(IFEQ, trueLabel);
                else if (op == "!=") emit(IFNE, trueLabel);
                else if (op == "<") emit(IFLT, trueLabel);
                else if (op == "<=") emit(IFLE, trueLabel);
                else if (op == ">") emit(IFGT, trueLabel);
                else if (op == ">=") emit(IFGE, trueLabel);
            }

            emit(ICONST_0); // false
            emit(GOTO, exitLabel);
            emitLabel(trueLabel);
            emit(ICONST_1); // true
            emitLabel(exitLabel);

            localStack->decrease(1);  // only one branch will be taken
        }
    }
}

void ExpressionGenerator::emitSimpleExpression(XParser::SimpleExpressionContext *ctx){
    int count = ctx->term().size();
    bool negate =    (ctx->sign() != nullptr)
                     && (ctx->sign()->getText() == "-");

    // First term.
    XParser::TermContext *termCtx1 = ctx->term()[0];
    Typespec *type1 = termCtx1->type;
    emitTerm(termCtx1);

    if (negate) emit(type1 == Predefined::integerType ? INEG : FNEG);

    // Loop over the subsequent terms.
    for (int i = 1; i < count; i++)
    {
        string op = toLowerCase(ctx->addOp()[i-1]->getText());
        XParser::TermContext *termCtx2 = ctx->term()[i];
        Typespec *type2 = termCtx2->type;

        bool integerMode = false;
        bool realMode    = false;
        bool booleanMode = false;

        if (   TypeChecker::isIntegerOrChar(type1)
               && TypeChecker::isIntegerOrChar(type2))
        {
            integerMode = true;
        }
        else if (   (type1 == Predefined::realType)
                    || (type2 == Predefined::realType))
        {
            realMode = true;
        }
        else if (   (type1 == Predefined::booleanType)
                    && (type2 == Predefined::booleanType))
        {
            booleanMode = true;
        }

        if (integerMode)
        {
            emitTerm(termCtx2);

            if (op == "+")          emit(IADD);
            else if (op == "-")     emit(ISUB);
            else if (op == "<<")    emit(ISHL);
            else if (op == ">>")    emit(ISHR);
            else                    emit(IUSHR);
        }
        else if (realMode)
        {
            emitCast(type1, Predefined::realType);
            emitTerm(termCtx2);
            emitCast(type2, Predefined::realType);

            if (op == "+") emit(FADD);
            else           emit(FSUB);
            type1 = Predefined::realType;
        }
        else if (booleanMode)
        {
            emitTerm(termCtx2);
            emit(IOR);
        }
        else  // stringMode
        {
            emit(NEW, "java/lang/StringBuilder");
            emit(DUP_X1);
            emit(SWAP);
            emit(INVOKESTATIC,
                 string("java/lang/String/valueOf(Ljava/lang/Object;)") +
                 string("Ljava/lang/String;"));
            emit(INVOKESPECIAL,
                 string("java/lang/StringBuilder/<init>") +
                 string("(Ljava/lang/String;)V"));
            localStack->decrease(1);

            emitTerm(termCtx2);
            emit(INVOKEVIRTUAL,
                 string("java/lang/StringBuilder/append(Ljava/lang/String;)") +
                 string("Ljava/lang/StringBuilder;"));
            localStack->decrease(1);
            emit(INVOKEVIRTUAL,
                 string("java/lang/StringBuilder/toString()") +
                 string("Ljava/lang/String;"));
            localStack->decrease(1);
        }
    }
}

//change
void ExpressionGenerator::emitTerm(XParser::TermContext *ctx){
    int count = ctx->factor().size();

    // First factor.
    XParser::FactorContext *factorCtx1 = ctx->factor()[0];
    Typespec *type1 = factorCtx1->type;
    compiler->visit(factorCtx1);

    // Loop over the subsequent factors.
    for (int i = 1; i < count; i++)
    {
        string op = toLowerCase(ctx->mulOp()[i-1]->getText());
        XParser::FactorContext *factorCtx2 = ctx->factor()[i];
        Typespec *type2 = factorCtx2->type;

        bool integerMode = false;
        bool realMode    = false;

        if (   TypeChecker::isIntegerOrChar(type1)
               && TypeChecker::isIntegerOrChar(type2))
        {
            integerMode = true;
        }
        else if (   (type1 == Predefined::realType)
                    || (type2 == Predefined::realType))
        {
            realMode = true;
        }

        if (integerMode)
        {   
            emitCast(type1, Predefined::integerType);
            compiler->visit(factorCtx2);
            emitCast(type2, Predefined::integerType);

            if      (op == "*")   emit(IMUL);
            else if (op == "/")   emit(IDIV);
            else if (op == "%") emit(IREM);
            type1 = Predefined::integerType;
        }
        else if (realMode)
        {
            emitCast(type1, Predefined::realType);
            compiler->visit(factorCtx2);
            emitCast(type2, Predefined::realType);

            if      (op == "*") emit(FMUL);
            else if (op == "/") emit(FDIV);
            else if (op == "%") emit(FREM);
            type1 = Predefined::realType;
        }
        else  // booleanMode
        {
            compiler->visit(factorCtx2);
            emit(IAND);
        }
    }
    
}

void ExpressionGenerator::emitNotFactor(XParser::NotFactorContext *ctx){
    compiler->visit(ctx->factor());
    emit(ICONST_1);
    emit(IXOR);
}

//change
void ExpressionGenerator::emitLoadValue(XParser::VariableContext *varCtx){
    int a = varCtx->modifier().size();
    // Load the scalar value or structure address.
    Typespec *variableType = emitLoadVariable(varCtx);

    // Load an array element's or record field's value.
    int modifierCount = varCtx->modifier().size();
    if (modifierCount > 0)
    {
        XParser::ModifierContext *lastModCtx = varCtx->modifier().back();
        emitLoadArrayElementValue(variableType);
    }
}

//change
Typespec *ExpressionGenerator::emitLoadVariable(XParser::VariableContext *varCtx){
    SymtabEntry *variableId = varCtx->entry;
    Typespec *variableType = variableId->getType();


    // Scalar value or structure address.
    CodeGenerator::emitLoadValue(variableId);  // why need CodeGenerator::?

    //Not needed since we aren't including arrays/records
    int modifierCount = varCtx->modifier().size();
    // Loop over subscript and field modifiers.
    for (int i = 0; i < modifierCount; ++i)
    {
        XParser::ModifierContext *modCtx = varCtx->modifier(i);
        bool lastModifier = i == modifierCount - 1;

        // Subscript
        variableType = emitLoadArrayElementAccess(modCtx, variableType, lastModifier);

    }

    return variableType;
}

//change
Typespec *ExpressionGenerator::emitLoadArrayElementAccess(XParser::ModifierContext *modCtx,Typespec *elmtType, bool lastModifier){
    // Loop over the subscripts.
    emitExpression(modCtx->index()->expression());

    if (!lastModifier){
        emit(AALOAD);
    }
    elmtType = elmtType->getArrayElementType();

    return elmtType;
}

//change
Typespec *ExpressionGenerator::emitLoadArrayElementValue(Typespec *elmtType){
    Form form = SCALAR;

    if (elmtType != nullptr)
    {
        elmtType = elmtType->baseType();
        form = elmtType->getForm();
    }

    // Load a character from a string.
    if (elmtType == Predefined::charType){
        emit(INVOKEVIRTUAL, "java/lang/StringBuilder.charAt(I)C");
    }

        // Load an array element.
    else{
        emit(  elmtType == Predefined::integerType ? IALOAD
        : elmtType == Predefined::realType    ? FALOAD
        : elmtType == Predefined::booleanType ? BALOAD
        : elmtType == Predefined::charType    ? CALOAD
        : form == ENUMERATION                 ? IALOAD
        :                                       AALOAD);
    }

    return nullptr;
}

//change
void ExpressionGenerator::emitLoadIntegerConstant(XParser::NumberContext *intCtx){
    int value = stoi(intCtx->getText());
    emitLoadConstant(value);
}

//change
void ExpressionGenerator::emitLoadRealConstant(XParser::NumberContext *realCtx){
    float value = stof(realCtx->getText());
    emitLoadConstant(value);
}

}} // namespace backend::compiler
