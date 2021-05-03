.class public ALU
.super java/lang/Object

.field private static _sysin Ljava/util/Scanner;

;
; Runtime input scanner
;
.method static <clinit>()V

	new	java/util/Scanner
	dup
	getstatic	java/lang/System/in Ljava/io/InputStream;
	invokespecial	java/util/Scanner/<init>(Ljava/io/InputStream;)V
	putstatic	ALU/_sysin Ljava/util/Scanner;
	return

.limit locals 0
.limit stack 3
.end method

;
; Main class constructor
;
.method public <init>()V
.var 0 is this LALU;

	aload_0
	invokespecial	java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

;
; FUNCTION factorial
;
.method private static factorial(I)I

.var 0 is n I
.var 1 is product I
	iconst_0
	istore_1
;
; 002 intproduct=1
;
	iconst_1
	istore_1
L001:
	iload_0
	iconst_1
	if_icmpgt	L003
	iconst_0
	goto	L004
L003:
	iconst_1
L004:
	iconst_0
	if_icmpeq	L002
;
; 004 product=product*n
;
	iload_1
	iload_0
	imul
	istore_1
;
; 005 n--
;
	iload_0
	iconst_1
	isub
	istore_0
	goto	L001
L002:
;
; 007 returnproduct
;
	iload_1
	ireturn

	ireturn

.limit locals 2
.limit stack 3
.end method

;
; FUNCTION modulo
;
.method private static modulo(II)I

.var 2 is mod I
.var 0 is oper1 I
.var 1 is oper2 I
	iconst_0
	istore_2
;
; 011 intmod=oper1%oper2
;
	iload_0
	iload_1
	irem
	istore_2
;
; 012 returnmod
;
	iload_2
	ireturn

	ireturn

.limit locals 3
.limit stack 3
.end method

;
; FUNCTION ALU
;
.method private static ALU(FFI)F

.var 2 is mode I
.var 0 is oper1 F
.var 1 is oper2 F
.var 4 is oper_num I
.var 3 is output F
	iconst_0
	istore	4
	fconst_0
	fstore_3
;
; 016 floatoutput
;
;
; 017 intoper_num
;
	iload_2
	lookupswitch
	  0: L005
	  1: L006
	  2: L007
	  3: L008
	  default: L009
L005:
;
; 020 output=oper1+oper2
;
	fload_0
	fload_1
	fadd
	fstore_3
	goto	L009
L006:
;
; 023 output=oper1-oper2
;
	fload_0
	fload_1
	fsub
	fstore_3
	goto	L009
L007:
;
; 026 output=oper1*oper2
;
	fload_0
	fload_1
	fmul
	fstore_3
	goto	L009
L008:
;
; 029 output=oper1/oper2
;
	fload_0
	fload_1
	fdiv
	fstore_3
	goto	L009
L009:
;
; 032 returnoutput
;
	fload_3
	freturn

	freturn

.limit locals 5
.limit stack 3
.end method

;
; PROCEDURE main
;
.method private static main()V

.var 6 is expr C
.var 4 is fact_n I
.var 7 is fact_res I
.var 2 is int_oper1 I
.var 3 is int_oper2 I
.var 8 is mod_res I
.var 0 is oper1 F
.var 1 is oper2 F
.var 5 is operation I
.var 9 is result F
	iconst_0
	istore	6
	iconst_0
	istore	4
	iconst_0
	istore	7
	iconst_0
	istore_2
	iconst_0
	istore_3
	iconst_0
	istore	8
	fconst_0
	fstore_0
	fconst_0
	fstore_1
	iconst_0
	istore	5
	fconst_0
	fstore	9
;
; 036 floatoper1,oper2
;
;
; 037 intint_oper1,int_oper2
;
;
; 038 intfact_n
;
;
; 039 intoperation
;
;
; 040 charexpr
;
;
; 042 println("0 -> plus")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"0 -> plus\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 043 println("1 -> minus")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"1 -> minus\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 044 println("2 -> multiply")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"2 -> multiply\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 045 println("3 -> devide")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"3 -> devide\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 046 println("4 -> modulo")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"4 -> modulo\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 047 println("5 -> factorial")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"5 -> factorial\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 048 println("please chose the operation you want: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"please chose the operation you want: \n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 049 get(operation)
;
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore	5
	iload	5
	iconst_5
	if_icmpeq	L012
	iconst_0
	goto	L013
L012:
	iconst_1
L013:
	iconst_0
	if_icmpeq	L011
;
; 051 println("please enter a number for factorial: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"please enter a number for factorial: \n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 052 get(fact_n)
;
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore	4
;
; 053 intfact_res=factorial(fact_n)
;
	iload	4
	invokestatic	ALU/factorial(I)I
	istore	7
;
; 054 println(fact_n,"! = ",fact_res)
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d! = %d\n"
	iconst_2
	anewarray	java/lang/Object
	dup
	iconst_0
	iload	4
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	iconst_1
	iload	7
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto	L010
L011:
	iload	5
	iconst_4
	if_icmpeq	L015
	iconst_0
	goto	L016
L015:
	iconst_1
L016:
	iconst_0
	if_icmpeq	L014
;
; 056 println("please input 2 operand: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"please input 2 operand: \n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 057 get(int_oper1,int_oper2)
;
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore_2
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore_3
;
; 058 intmod_res=modulo(int_oper1,int_oper2)
;
	iload_2
	iload_3
	invokestatic	ALU/modulo(II)I
	istore	8
;
; 059 println(int_oper1," mod ",int_oper2," = ",mod_res)
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d mod %d = %d\n"
	iconst_3
	anewarray	java/lang/Object
	dup
	iconst_0
	iload_2
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	iconst_1
	iload_3
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	iconst_2
	iload	8
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto	L010
L014:
;
; 061 println("please input 2 operand: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"please input 2 operand: \n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 062 get(oper1,oper2)
;
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextFloat()F
	fstore_0
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextFloat()F
	fstore_1
	iload	5
	lookupswitch
	  0: L017
	  1: L018
	  2: L019
	  3: L020
	  default: L021
L017:
;
; 065 expr='+'
;
	bipush	43
	istore	6
	goto	L021
L018:
;
; 068 expr='-'
;
	bipush	45
	istore	6
	goto	L021
L019:
;
; 071 expr='*'
;
	bipush	42
	istore	6
	goto	L021
L020:
;
; 074 expr='/'
;
	bipush	47
	istore	6
	goto	L021
L021:
;
; 077 floatresult=ALU(oper1,oper2,operation)
;
	fload_0
	fload_1
	iload	5
	invokestatic	ALU/ALU(FFI)F
	fstore	9
;
; 078 println(oper1:2:2," ",expr," ",oper2:2:2," = ",result:2:2)
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%2.2f %c %2.2f = %2.2f\n"
	iconst_4
	anewarray	java/lang/Object
	dup
	iconst_0
	fload_0
	invokestatic	java/lang/Float/valueOf(F)Ljava/lang/Float;
	aastore
	dup
	iconst_1
	iload	6
	invokestatic	java/lang/Character/valueOf(C)Ljava/lang/Character;
	aastore
	dup
	iconst_2
	fload_1
	invokestatic	java/lang/Float/valueOf(F)Ljava/lang/Float;
	aastore
	dup
	iconst_3
	fload	9
	invokestatic	java/lang/Float/valueOf(F)Ljava/lang/Float;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
L010:

	return

.limit locals 10
.limit stack 13
.end method

;
; MAIN
;
.method public static main([Ljava/lang/String;)V
.var 0 is args [Ljava/lang/String;
.var 1 is _start Ljava/time/Instant;
.var 2 is _end Ljava/time/Instant;
.var 3 is _elapsed J

	invokestatic	java/time/Instant/now()Ljava/time/Instant;
	astore_1

	invokestatic	ALU/main()V

	invokestatic	java/time/Instant/now()Ljava/time/Instant;
	astore_2
	aload_1
	aload_2
	invokestatic	java/time/Duration/between(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)Ljava/time/Duration;
	invokevirtual	java/time/Duration/toMillis()J
	lstore_3
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"\n[%,d milliseconds execution time.]\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	lload_3
	invokestatic	java/lang/Long/valueOf(J)Ljava/lang/Long;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	return

.limit locals 6
.limit stack 7
.end method
