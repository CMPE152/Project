.class public fact
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
	putstatic	fact/_sysin Ljava/util/Scanner;
	return

.limit locals 0
.limit stack 3
.end method

;
; Main class constructor
;
.method public <init>()V
.var 0 is this Lfact;

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
; 004 intproduct=1
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
; 006 product=product*n
;
	iload_1
	iload_0
	imul
	istore_1
;
; 007 n--
;
	iload_0
	iconst_1
	isub
	istore_0
	goto	L001
L002:
;
; 009 returnproduct
;
	iload_1
	ireturn

	ireturn

.limit locals 2
.limit stack 3
.end method

;
; PROCEDURE main
;
.method private static main()V

.var 0 is i I
	iconst_0
	istore_0
;
; 013 inti
;
;
; 014 print("please input the n: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"please input the n: "
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 015 get(i)
;
	getstatic	fact/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore_0
;
; 016 i=factorial(i)
;
	iload_0
	invokestatic	fact/factorial(I)I
	istore_0
;
; 017 print("the n! is: ")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"the n! is: "
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 018 println(i)
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	iload_0
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	return

.limit locals 1
.limit stack 9
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

	invokestatic	fact/main()V

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
