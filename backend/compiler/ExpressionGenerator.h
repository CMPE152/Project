#ifndef EXPRESSIONGENERATOR_H_
#define EXPRESSIONGENERATOR_H_

#include "backend/compiler/CodeGenerator.h"

namespace backend { namespace compiler {

class ExpressionGenerator : public CodeGenerator
{
public:
    /**
     * Constructor.
     * @param parent the parent code generator.
     * @param compiler the compiler to use.
     */
    ExpressionGenerator(CodeGenerator *parent, Compiler *compiler,string outputDir="")
        : CodeGenerator(parent, compiler,outputDir) {}

    void emitExpression(XParser::ExpressionContext *ctx);

    void emitSimpleExpression(XParser::SimpleExpressionContext *ctx);

    void emitTerm(XParser::TermContext *ctx);

    void emitNotFactor(XParser::NotFactorContext *ctx);

    void emitLoadValue(XParser::VariableContext *varCtx);

    Typespec *emitLoadVariable(XParser::VariableContext *varCtx);

    Typespec *emitLoadArrayElementAccess(XParser::ModifierContext *modCtx,Typespec *elmtType, bool lastModifier);

    Typespec *emitLoadArrayElementValue(Typespec *elmtType);

    void emitLoadIntegerConstant(XParser::NumberContext *intCtx);

    void emitLoadRealConstant(XParser::NumberContext *realCtx);

    void emitPostcrement(XParser::PostcrementVariableContext *ctx);

    void emitPrecrement(XParser::PrecrementVariableContext *ctx);
private:

};

}} // namespace backend::compiler

#endif /* EXPRESSIONGENERATOR_H_ */
