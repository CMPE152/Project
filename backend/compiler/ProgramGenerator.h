#ifndef PROGRAMGENERATOR_H_
#define PROGRAMGENERATOR_H_

#include "backend/compiler/CodeGenerator.h"

namespace backend { namespace compiler {

class ProgramGenerator : public CodeGenerator
{
private:
    SymtabEntry *programId;  // symbol table entry of the program name
    int programLocalsCount;  // count of program local variables
    Typespec *returnType;

public:
    /*
     * Constructor.
     * @param the parent generator.
     * @param compiler the compiler to use.
     */
    ProgramGenerator(CodeGenerator *parent, Compiler *compiler,string outputDir="")
        : CodeGenerator(parent, compiler,outputDir),
          programId(nullptr), returnType(nullptr), programLocalsCount(5) // 5 because _elapsed is long
    {
        localStack = new LocalStack();
    }

    void emitProgram(XParser::ProgramContext *ctx);
    void emitRoutine(XParser::FunctionDefinitionContext *ctx);
    void emitReturn(XParser::ReturnStatementContext *ctx);

private:
    void emitProgramVariables();
    void emitInputScanner();
    void emitConstructor();
    void emitSubroutines(XParser::ProgramContext *ctx);
    void emitMainMethod(XParser::ProgramContext *ctx);
    void emitMainPrologue(SymtabEntry* programId);
    void emitMainEpilogue();
    void emitFunction(XParser::FunctionDefinitionContext *ctx);
    void emitFunctionHeader(SymtabEntry *routineId);
    void emitFunctionLocals(SymtabEntry *routineId);
    void emitFunctionReturn(SymtabEntry *routineId);
    void emitFunctionEpilogue();
};

}} // namespace backend::compiler

#endif /* PROGRAMGENERATOR_H_ */
