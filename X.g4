grammar X;

@header {
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;
}

//====Starting point====//
program locals [SymtabEntry *entry = nullptr]
    : (functionDefinition | functionDeclaration ';' |assignmentStatement ';' | variableDeclaration ';')+ ;

//====General Statements====//
singleStatement
    : functionDeclaration ';'
    | statement ';'
    | emptyStatement ';'
    ;

statement
    : assignmentStatement
    | variableDeclaration
    | printStatement
    | printlnStatement
    | getStatement
    | getlnStatement
    | functionCall
    | returnStatement
    ;

emptyStatement : ;

//====Declarations====//
variableDeclaration
    : typeIdentifier variableIdentifier (',' variableIdentifier)*
    | typeIdentifier variableIdentifier ('[' length ']')*
    ;
length : expression ;

//====Variable assignment====//
assignmentStatement
    : lhs '=' rhs   #assignVariable
    | (('++' variable) | (variable '++')) #incrementVariable
    | (('--' variable) | (variable '--')) #decrementVariable
    ;

lhs locals [ Typespec *type = nullptr ]
    : variable
    | variableDeclaration
    ;

rhs : expression ;

//====Program flow/control statements====//
scope : '{' (singleStatement | scopeStatement | scope)* '}' ;

scopeStatement
    : doWhileLoop
    | whileLoop
    | forLoop
    | ifStatement
    | switchStatement
    ;

doWhileLoop : DO scope WHILE '(' expression ')';
whileLoop : WHILE '(' expression ')' scope ;
forLoop : FOR '(' statement? ';' expression ';' statement? ')' scope ;
ifStatement
    : IF '(' expression ')' scope
      (ELSE IF '(' expression ')' scope)*
      (ELSE scope)?
    ;

switchStatement : SWITCH '(' expression ')' '{' switchCaseList '}';
switchCaseList :  caseBranch* defaultBranch? ;
caseBranch : CASE number ':' scope ;
defaultBranch : DEFAULT ':' scope ;

//====Function declarations/definitions/calls====//
functionDefinition : functionDeclaration scope ;
functionDeclaration : typeIdentifier functionIdentifier '(' (parameterDeclarationsList | VOID)? ')' ;

functionIdentifier locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
   : IDENTIFIER ;
parameterDeclarationsList : parameterDeclaration ( ',' parameterDeclaration )* ;
parameterDeclaration     : typeIdentifier ARRAYINDICATOR* parameterIdentifier;
parameterIdentifier locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
   : IDENTIFIER ;

returnStatement: RETURN expression?;

functionCall : functionIdentifier '(' argumentList? ')' ;
argumentList : argument ( ',' argument )* ;
argument     : expression ;


//These are not actually in C, but we included them since we can't
//Use #include to use stdio.h
//====Printouts (So we can see what's going on)====//
printStatement   : PRINT '(' printArguments ')' ;
printlnStatement : PRINTLN '(' printArguments? ')' ;
printArguments   : printArgument (',' printArgument)* ;
printArgument    : expression (':' fieldWidth)? ;
fieldWidth       : sign? integerConstant (':' decimalPlaces)? ;
decimalPlaces    : integerConstant ;

//====Readin (So we can get input)====//
getStatement : GET '(' getArguments ')' ;
getlnStatement : GETLN '(' getArguments ')' ;
getArguments : variable ( ',' variable )* ;

//====Expressions,factors, etc.====//
expression locals [ Typespec *type = nullptr ]
    : simpleExpression (relOp simpleExpression)?
    | expression '?' expression ':' expression
    ;

simpleExpression locals [ Typespec *type = nullptr ]
    : sign? term (addOp term)* ;

term locals [ Typespec *type = nullptr ]
    : factor (mulOp factor)* ;

factor locals [ Typespec *type = nullptr ]
    : variable             # variableFactor
    | variable ('++' | '--') # PostcrementVariable
    | ('++' | '--') variable # PrecrementVariable
    | number               # numberFactor
    | characterConstant    # characterFactor
    | stringConstant       # stringFactor
    | functionCall         # functionCallFactor
    | '!' factor           # notFactor
    | '(' expression ')'   # parenthesizedFactor
    ;

//====Variables====//
variable locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
    : variableIdentifier modifier* ;
modifier : '[' index ']';
index : expression ;
variableIdentifier locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
    : IDENTIFIER ;

number          : sign? unsignedNumber ;
unsignedNumber  : integerConstant | realConstant ;
sign : '-' ;
integerConstant : INTEGER ;
realConstant    : REAL;


//====Operators====//
relOp : '==' | '!=' | '<' | '<=' | '>' | '>=' ;
addOp : '+' | '-' | '||' | '>>' | '<<' | '>>>';
mulOp : '*' | '/' | '%' | '&&' ;

//====Built-in Types====//
typeIdentifier locals [ Typespec *type = nullptr, SymtabEntry *entry = nullptr ]
    : INT |
      BOOL |
      FLOAT |
      VOID |
      CHAR
      ;


characterConstant : CHARACTER ;
stringConstant    : STRING ;

//====Lexor Fragments/Word Recognition====//
fragment A : 'a' ;
fragment B : 'b' ;
fragment C : 'c' ;
fragment D : 'd' ;
fragment E : 'e' ;
fragment F : 'f' ;
fragment G : 'g' ;
fragment H : 'h' ;
fragment I : 'i' ;
fragment J : 'j' ;
fragment K : 'k' ;
fragment L : 'l' ;
fragment M : 'm' ;
fragment N : 'n' ;
fragment O : 'o' ;
fragment P : 'p' ;
fragment Q : 'q' ;
fragment R : 'r' ;
fragment S : 's' ;
fragment T : 't' ;
fragment U : 'u' ;
fragment V : 'v' ;
fragment W : 'w' ;
fragment X : 'x' ;
fragment Y : 'y' ;
fragment Z : 'z' ;

INT    : I N T ;
BOOL   : B O O L ;
FLOAT  : F L O A T ;
VOID   : V O I D ;

DO        : D O ;
WHILE     : W H I L E ;
FOR       : F O R ;
IF        : I F ;
ELSEIF    : E L S E I F ;
ELSE      : E L S E ;
SWITCH    : S W I T C H ;
CASE      : C A S E ;
DEFAULT   : D E F A U L T ;
PRINT     : P R I N T ;
PRINTLN   : P R I N T L N ;
GET     : G E T ;
GETLN    : G E T L N ;
RETURN    : R E T U R N ;
CHAR : C H A R;

ARRAYINDICATOR : '[]' ;
SINGLEQUOTE  : '\'' ;
DOUBLEQUOTE  : '"' ;
DOUBLESLASH  : '//' ;

IDENTIFIER : [a-zA-Z][a-zA-Z0-9_]* ;
INTEGER    : [0-9]+ ;

REAL       : INTEGER '.' INTEGER
           | INTEGER ('e' | 'E') ('+' | '-')? INTEGER
           | INTEGER '.' INTEGER ('e' | 'E') ('+' | '-')? INTEGER
           ;

CHARACTER : SINGLEQUOTE CHARACTER_CHAR SINGLEQUOTE;
STRING : DOUBLEQUOTE STRING_CHAR* DOUBLEQUOTE;

fragment CHARACTER_CHAR : ~('\'');
fragment STRING_CHAR
    : DOUBLEQUOTE DOUBLEQUOTE
    | ~('"')
    ;

NEWLINE : '\r'? '\n' -> skip ;
WS      : [ \t]+ -> skip ;

COMMENT : DOUBLESLASH ~[\r\n]* -> skip ;
BLOCKCOMMENT : '/*' .*? '*/' -> skip ;
