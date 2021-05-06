#ifndef SEMANTICS_H_
#define SEMANTICS_H_

#include <map>

#include "XBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/Typespec.h"
#include "intermediate/util/BackendMode.h"
#include "frontend/SemanticErrorHandler.h"

namespace frontend {

    using namespace std;
    using namespace intermediate::symtab;
    using namespace intermediate::type;

    class Semantics : public XBaseVisitor
    {
    private:
        string programName;
        BackendMode mode;
        SymtabStack *symtabStack;
        SymtabEntry *programId;
        SemanticErrorHandler error;

        map<string, Typespec *> *typeTable;

        /**
         * Return the number of values in a datatype.
         * @param type the datatype.
         * @return the number of values.
         */
        int typeCount(Typespec *type);

        /**
         * Determine whether or not an expression is a variable only.
         * @param exprCtx the ExpressionContext.
         * @return true if it's an expression only, else false.
         */
        bool expressionIsVariable(XParser::ExpressionContext *exprCtx);

        /**
         * Perform semantic operations on procedure and function call arguments.
         * @param listCtx the ArgumentListContext.
         * @param parameters the vector of parameters to fill.
         */
        void checkCallArguments(XParser::ArgumentListContext *listCtx,
                                vector<SymtabEntry *> *parms);

        /**
         * Determine the datatype of a variable that can have modifiers.
         * @param varCtx the VariableContext.
         * @param varType the variable's datatype without the modifiers.
         * @return the datatype with any modifiers.
         */
        Typespec *variableDatatype(XParser::VariableContext *varCtx,
                                   Typespec *varType);

        void postErrorCheck();


    public:
        Semantics(BackendMode mode,string programName) : mode(mode), programId(nullptr), programName(programName)
        {
            // Create and initialize the symbol table stack.
            symtabStack = new SymtabStack();
            Predefined::initialize(symtabStack);

            typeTable = new map<string, Typespec *>();
            (*typeTable)["integer"] = Predefined::integerType;
            (*typeTable)["real"]    = Predefined::realType;
            (*typeTable)["boolean"] = Predefined::booleanType;
            (*typeTable)["char"]    = Predefined::charType;
            (*typeTable)["string"]  = Predefined::stringType;
            (*typeTable)["void"]  = Predefined::voidType;
        }

        /**
         * Get the symbol table entry of the program identifier.
         * @return the entry.
         */
        SymtabEntry *getProgramId() { return programId; }

        /**
         * Get the count of semantic errors.
         * @return the count.
         */
        int getErrorCount() const;

        Object visitProgram(XParser::ProgramContext *ctx) override;
        Object visitVariableDeclaration(XParser::VariableDeclarationContext *ctx) override;
        Object visitTypeIdentifier(XParser::TypeIdentifierContext *ctx) override;
        Object visitLhs(XParser::LhsContext *ctx) override;
        Object visitAssignVariable(XParser::AssignVariableContext *ctx) override;
        Object visitIncrementVariable(XParser::IncrementVariableContext *ctx) override;
        Object visitDecrementVariable(XParser::DecrementVariableContext *ctx) override;
        Object visitPrecrementVariable(XParser::PrecrementVariableContext *ctx) override;
        Object visitPostcrementVariable(XParser::PostcrementVariableContext *ctx) override;

        Object visitFunctionDeclaration(XParser::FunctionDeclarationContext *ctx) override;
        Object visitFunctionDefinition(XParser::FunctionDefinitionContext *ctx) override;
        Object visitParameterDeclarationsList(XParser::ParameterDeclarationsListContext *ctx) override;
        Object visitParameterDeclaration(XParser::ParameterDeclarationContext *ctx) override;

        Object visitDoWhileLoop(XParser::DoWhileLoopContext *ctx) override;
        Object visitWhileLoop(XParser::WhileLoopContext *ctx) override;
        Object visitForLoop(XParser::ForLoopContext *ctx) override;
        Object visitIfStatement(XParser::IfStatementContext *ctx) override;
        Object visitSwitchStatement(XParser::SwitchStatementContext *ctx) override;

        Object visitFunctionCall(XParser::FunctionCallContext *ctx) override;
        Object visitFunctionCallFactor(XParser::FunctionCallFactorContext *ctx) override;
        Object visitReturnStatement(XParser::ReturnStatementContext *ctx) override;

        Object visitExpression(XParser::ExpressionContext *ctx) override;
        Object visitSimpleExpression(XParser::SimpleExpressionContext *ctx) override;
        Object visitTerm(XParser::TermContext *ctx) override;
        Object visitVariableFactor(XParser::VariableFactorContext *ctx) override;
        Object visitVariable(XParser::VariableContext *ctx) override;
        Object visitVariableIdentifier(XParser::VariableIdentifierContext *ctx) override;
        Object visitNumberFactor(XParser::NumberFactorContext *ctx) override;
        Object visitCharacterFactor(XParser::CharacterFactorContext *ctx) override;
        Object visitStringFactor(XParser::StringFactorContext *ctx) override;
        Object visitNotFactor(XParser::NotFactorContext *ctx) override;
        Object visitParenthesizedFactor(XParser::ParenthesizedFactorContext *ctx) override;
        Object visitScope(XParser::ScopeContext *ctx) override;
    };

} // namespace frontend

#endif /* SEMANTICS_H_ */
