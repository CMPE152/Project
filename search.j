.class public search
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
	putstatic	search/_sysin Ljava/util/Scanner;
	return

.limit locals 0
.limit stack 3
.end method

;
; Main class constructor
;
.method public <init>()V
.var 0 is this Lsearch;

	aload_0
	invokespecial	java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

;
; FUNCTION search
;
.method private static search([II)I

.var 0 is arr [I
.var 2 is i I
.var 1 is n I
.var 3 is value I
	iconst_0
	istore_2
	iconst_0
	istore_3
;
; 003 inti=0
;
	iconst_0
	istore_2
;
; 004 intvalue
;
;
; 006 println("Enter serach number in your array")
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Enter serach number in your array\n"
	invokevirtual	java/io/PrintStream/print(Ljava/lang/String;)V
;
; 007 get(value)
;
	getstatic	search/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore_3
L001:
	aload_0
	iload_2
	iaload
	iload_3
	if_icmpeq	L005
	iconst_0
	goto	L006
L005:
	iconst_1
L006:
	iconst_0
	if_icmpeq	L004
;
; 011 returni
;
	iload_2
	ireturn
	goto	L003
L004:
L003:
;
; 013 i++
;
	iload_2
	iconst_1
	iadd
	istore_2
	iload_2
	iload_1
	if_icmplt	L007
	iconst_0
	goto	L008
L007:
	iconst_1
L008:
	iconst_1
	if_icmpeq	L001
L002:
;
; 016 return-1
;
	iconst_1
	ineg
	ireturn

	ireturn

.limit locals 4
.limit stack 3
.end method

;
; PROCEDURE main
;
.method private static main()V

.var 1 is a [I
.var 3 is i I
.var 0 is num I
.var 4 is result I
.var 2 is value I
	iconst_0
	istore_3
	iconst_0
	istore_0
	iconst_0
	istore	4
	iconst_0
	istore_2
;
; 020 intnum=5
;
	iconst_5
	istore_0
;
; 021 inta[num]
;

	iload_0
	newarray	int
	astore_1
;
; 022 intvalue
;
;
; 024 inti=0
;
	iconst_0
	istore_3
L009:
	iload_3
	iload_0
	if_icmplt	L011
	iconst_0
	goto	L012
L011:
	iconst_1
L012:
	iconst_0
	if_icmpeq	L010
;
; 025 println("Enter ",i,(i==1)?"st":((i==2)?"nd":(i==3?"rd":"th"))," number ...
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Enter %d%s number in array: \n"
	iconst_2
	anewarray	java/lang/Object
	dup
	iconst_0
	iload_3
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	iconst_1
	iload_3
	iconst_1
	if_icmpeq	L015
	iconst_0
	goto	L016
L015:
	iconst_1
L016:
	iconst_0
	if_icmpeq	L013
	ldc	"st"
	goto	L014
L013:
	iload_3
	iconst_2
	if_icmpeq	L019
	iconst_0
	goto	L020
L019:
	iconst_1
L020:
	iconst_0
	if_icmpeq	L017
	ldc	"nd"
	goto	L018
L017:
	iload_3
	iconst_3
	if_icmpeq	L023
	iconst_0
	goto	L024
L023:
	iconst_1
L024:
	iconst_0
	if_icmpeq	L021
	ldc	"rd"
	goto	L022
L021:
	ldc	"th"
L022:
L018:
L014:
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
;
; 026 get(value)
;
	getstatic	search/_sysin Ljava/util/Scanner;
	invokevirtual	java/util/Scanner/nextInt()I
	istore_2
;
; 027 a[i]=value
;
	aload_1
	iload_3
	iload_2
	iastore
;
; 024 i++
;
	iload_3
	iconst_1
	iadd
	istore_3
	goto	L009
L010:
;
; 030 intresult=search(a,num)
;
	aload_1
	iload_0
	invokestatic	search/search([II)I
	istore	4
;
; 032 println((result==-1)?"Can't find the number in your array, index is no ...
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%s%d\n"
	iconst_2
	anewarray	java/lang/Object
	dup
	iconst_0
	iload	4
	iconst_1
	ineg
	if_icmpeq	L027
	iconst_0
	goto	L028
L027:
	iconst_1
L028:
	iconst_0
	if_icmpeq	L025
	ldc	"Can't find the number in your array, index is now set to: "
	goto	L026
L025:
	ldc	"Find the number in the array at index location: "
L026:
	aastore
	dup
	iconst_1
	iload	4
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	return

.limit locals 5
.limit stack 16
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

	invokestatic	search/main()V

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
