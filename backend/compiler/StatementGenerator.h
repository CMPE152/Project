#ifndef STATEMENTGENERATOR_H_
#define STATEMENTGENERATOR_H_

#include <vector>
#include <map>

#include "backend/compiler/CodeGenerator.h"

namespace backend { namespace compiler {

using namespace std;

class StatementGenerator : public CodeGenerator
{
public:
    /**
     * Constructor.
     * @param parent the parent code generator.
     * @param compiler the compiler to use.
     */
    StatementGenerator(CodeGenerator *parent, Compiler *compiler,string outputDir="")
        : CodeGenerator(parent, compiler,outputDir) {}

    void emitAssignment(XParser::AssignVariableContext *ctx);

    void emitDeclarationAssignment(XParser::AssignVariableContext *ctx);

    void emitIncrement(XParser::IncrementVariableContext *ctx);
    
    void emitDecrement(XParser::DecrementVariableContext *ctx);

    void emitIf(XParser::IfStatementContext *ctx);

    void emitSwitch(XParser::SwitchStatementContext *ctx);

    void emitDoWhile(XParser::DoWhileLoopContext *ctx);

    void emitWhile(XParser::WhileLoopContext *ctx);

    void emitFor(XParser::ForLoopContext *ctx);

    void emitProcedureCall(XParser::FunctionCallContext *ctx);

    void emitFunctionCall(XParser::FunctionCallContext *ctx);

    void emitPrint(XParser::PrintStatementContext *ctx);

    void emitPrintln(XParser::PrintlnStatementContext *ctx);

    void emitGet(XParser::GetStatementContext *ctx);

    void emitGetln(XParser::GetlnStatementContext *ctx);

private:

    void emitCall(SymtabEntry *routineId, XParser::ArgumentListContext *argListCtx);

    void emitPrint(XParser::PrintArgumentsContext *argsCtx, bool needLF);

    int createPrintFormat(XParser::PrintArgumentsContext *argsCtx, string& format,bool needLF);

    void emitArgumentsArray(XParser::PrintArgumentsContext *argsCtx,int exprCount);

    void emitGet(XParser::GetArgumentsContext *argsCtx, bool needSkip);

private:
    //A couple utility tools
    string typeToString(Typespec* type);
};

}} // namespace backend::compiler

#endif /* STATEMENTGENERATOR_H_ */
