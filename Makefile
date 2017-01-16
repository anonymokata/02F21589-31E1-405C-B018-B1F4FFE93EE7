CFLAGS=-Wall
LIBS=-lcheck
WHERE = /usr/local/lib
LIBS1 = $(WHERE)/libcheck.so.0

all: main

main: main.o IpNumberCheck.o RomanToDecimal.o DecimalToRoman.o AddOrSub.o
	gcc -o main main.o IpNumberCheck.o RomanToDecimal.o DecimalToRoman.o AddOrSub.o

main.o: main.c Functions.h
	gcc $(CFLAGS) -c main.c

IpNumberCheck.o: IpNumberCheck.c Functions.h
	gcc $(CFLAGS) -c IpNumberCheck.c

RomanToDecimal.o: RomanToDecimal.c Functions.h
	gcc $(CFLAGS) -c RomanToDecimal.c

DecimalToRoman.o: DecimalToRoman.c Functions.h
	gcc $(CFLAGS) -c DecimalToRoman.c

test: RomanNoCalc-test
	./RomanNoCalc-test

RomanNoCalc-test: test.c IpNumberCheck.c RomanToDecimal.c DecimalToRoman.c AddOrSub.c Functions.h
	gcc -o RomanNoCalc-test IpNumberCheck.c RomanToDecimal.c DecimalToRoman.c AddOrSub.c Functions.h test.c $(LIBS)

test.c: test.check
	~/checkmk test.check >test.c
