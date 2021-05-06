#ifndef COMPILER_H_
#define COMPILER_H_

#include "XBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/type/Typespec.h"
#include "backend/compiler/ProgramGenerator.h"
#include "backend/compiler/StatementGenerator.h"
#include "backend/compiler/ExpressionGenerator.h"

namespace backend { namespace compiler {

        using namespace std;
        using namespace intermediate::symtab;
        using namespace intermediate::type;

        class CodeGenerator;

        class Compiler : public XBaseVisitor
        {
        private:
            SymtabEntry *programId;  // symbol table entry of the program name
            string programName;      // the program name

            CodeGenerator       *code;            // base code generator
            ProgramGenerator    *programCode;     // program code generator
            StatementGenerator  *statementCode;   // statement code generator
            ExpressionGenerator *expressionCode;  // expression code generator

        public:
            /**
             * Constructor for the base compiler.
             * @param programId the symtab entry for the program name.
             */
            Compiler(SymtabEntry *programId,string outputFile="")
                    : programId(programId), programName(programId->getName()),
                      code(new CodeGenerator(programName, "j", this,outputFile)),
                      programCode(nullptr), statementCode(nullptr),
                      expressionCode(nullptr) {}

            /**
             * Constructor for child compilers of procedures and functions.
             * @param parent the parent compiler.
             */
            Compiler(Compiler *parent,string outputFile="")
                    : programId(parent->programId), programName(parent->programName),
                      code(parent->code), programCode(parent->programCode),
                      statementCode(nullptr), expressionCode(nullptr) {}


            /**
             * Get the name of the object (Jasmin) file.
             * @return the file name.
             */
            string getObjectFileName() { return code->getObjectFileName(); }
            Object loadValue(XParser::VariableContext *ctx);

            Object visitProgram(XParser::ProgramContext *ctx) override;
            Object visitFunctionDefinition(XParser::FunctionDefinitionContext *ctx) override;
            Object visitVariableDeclaration(XParser::VariableDeclarationContext *ctx) override;
            Object visitStatement(XParser::StatementContext *ctx) override;
            Object visitAssignVariable(XParser::AssignVariableContext *ctx) override;
            Object visitIncrementVariable(XParser::IncrementVariableContext *ctx) override;
            Object visitDecrementVariable(XParser::DecrementVariableContext *ctx) override;
            Object visitPostcrementVariable(XParser::PostcrementVariableContext *ctx) override;
            Object visitPrecrementVariable(XParser::PrecrementVariableContext *ctx) override;
            Object visitIfStatement(XParser::IfStatementContext *ctx) override;
            Object visitSwitchStatement(XParser::SwitchStatementContext *ctx) override;
            Object visitDoWhileLoop(XParser::DoWhileLoopContext *ctx) override;
            Object visitWhileLoop(XParser::WhileLoopContext *ctx) override;
            Object visitForLoop(XParser::ForLoopContext *ctx) override;
            Object visitFunctionCall(XParser::FunctionCallContext *ctx) override;
            Object visitReturnStatement(XParser::ReturnStatementContext *ctx) override;
            Object visitExpression(XParser::ExpressionContext *ctx) override;
            Object visitVariableFactor(XParser::VariableFactorContext *ctx) override;
            Object visitVariable(XParser::VariableContext *ctx) override;
            Object visitNumberFactor(XParser::NumberFactorContext *ctx) override;
            Object visitCharacterFactor(XParser::CharacterFactorContext *ctx) override;
            Object visitStringFactor(XParser::StringFactorContext *ctx) override;
            Object visitFunctionCallFactor(XParser::FunctionCallFactorContext *ctx) override;
            Object visitNotFactor(XParser::NotFactorContext *ctx) override;
            Object visitParenthesizedFactor(XParser::ParenthesizedFactorContext *ctx) override;
            Object visitPrintStatement(XParser::PrintStatementContext *ctx) override;
            Object visitPrintlnStatement(XParser::PrintlnStatementContext *ctx) override;
            Object visitGetStatement(XParser::GetStatementContext *ctx) override;
            Object visitGetlnStatement(XParser::GetlnStatementContext *ctx) override;


        private:
            /**
             * Create new child code generators.
             * @param parentGenerator the parent code generator.
             */
            void createNewGenerators(CodeGenerator *parentGenerator,string outputDir="")
            {
                programCode    = new ProgramGenerator(parentGenerator, this,outputDir);
                statementCode  = new StatementGenerator(programCode, this,outputDir);
                expressionCode = new ExpressionGenerator(programCode, this,outputDir);
            }
        };

    }}  // namespace backend::compiler

#endif /* COMPILER_H_ */
