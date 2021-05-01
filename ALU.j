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
; FUNCTION ALU
;
.method private static ALU(FFI)F

.var 2 is mode I
.var 0 is oper1 F
.var 1 is oper2 F
.var 3 is output F
	fconst_0
	fstore_3
;
; 003 floatoutput
;
	iload_2
	lookupswitch
	  0: L001
	  1: L002
	  2: L003
	  3: L004
	  default: L005
L001:
;
; 006 output=oper1+oper2
;
	fload_0
	fload_1
	fadd
	fstore_3
	goto	L005
L002:
;
; 009 output=oper1-oper2
;
	fload_0
	fload_1
	fsub
	fstore_3
	goto	L005
L003:
;
; 012 output=oper1*oper2
;
	fload_0
	fload_1
	fmul
	fstore_3
	goto	L005
L004:
;
; 015 output=oper1/oper2
;
	fload_0
	fload_1
	fdiv
	fstore_3
	goto	L005
L005:
;
; 018 returnoutput
;
	fload_3
	freturn

	freturn

.limit locals 4
.limit stack 3
.end method

;
; PROCEDURE main
;
.method private static main()V

.var 0 is oper1 F
.var 1 is oper2 F
.var 2 is operation I
.var 3 is result F
	fconst_0
	fstore_0
	fconst_0
	fstore_1
	iconst_0
	istore_2
	fconst_0
	fstore_3
;
; 022 floatoper1
;
;
; 023 floatoper2
;
;
; 024 intoperation
;
;
; 025 println("please input 2 operand: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"please input 2 operand: \n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 026 get(oper1,oper2)
;
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextFloat()F
	fstore_0
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextFloat()F
	fstore_1
;
; 028 println("0 for plus")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"0 for plus\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 029 println("1 for minus")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"1 for minus\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 030 println("2 for multiply")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"2 for multiply\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 031 println("3 for devide")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"3 for devide\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 032 println("please chose the operation you want: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"please chose the operation you want: \n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 033 get(operation)
;
	getstatic	ALU/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore_2
;
; 034 floatresult=ALU(oper1,oper2,operation)
;
	fload_0
	fload_1
	iload_2
	invokestatic	ALU/ALU(FFI)F
	fstore_3
;
; 035 print("the calculation result is: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"the calculation result is: "
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 036 println(result)
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%f\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	fload_3
	invokestatic	java/lang/Float/valueOf(F)Ljava/lang/Float;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	return

.limit locals 4
.limit stack 12
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
