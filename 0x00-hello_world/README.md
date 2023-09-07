# 0x00-hello_world

This directory contains the most basic beginner friendly C implementation

## 0. Preprocessor

### 0-preprocessor

* A script that runs a C file through the preprocessor and saves the result into another file.
* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

## 1. Compiler

### 1-compiler

* A script that compiles a C file but does not link.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
* Example: if the C file is main.c, the output file should be main.o

## 2. Assembler

### 2-assembler

* A script that generates the assembly code of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
* Example: if the C file is main.c, the output file should be main.s

## 3. Name

### 3-name

* A script that compiles a C file and creates an executable named cisfun.

* The C file name will be saved in the variable $CFILE

## 4. Hello, puts

### 4-puts.c

* A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
* It uses the function puts
* It does not use printf
* It ends with the value 0

## 5. Hello, printf

### 5-printf.c

* A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
* This one uses the function printf
* It does not use the function puts
* This program returns 0
* This program compiles without warning when using the -Wall gcc option

## 6. Size is not grandeur, and territory does not make a nation

### 6-size.c

* A C program that prints the size of various types on the computer it is compiled and run on.
* You should produce the exact same output as in the example
* This program returns 0
* This compiles without warnings
* It is tested with the package libc6-dev-i386 on a Linux to test the -m32 gcc option

## 7. Intel

### 100-intel

* A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable $CFILE.
* The output file should be named the same as the C file, but with the extension .s instead of .c.
* Example: if the C file is main.c, the output file should be main.s

## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

### 101-quote.c

* A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
* The program does not use any functions listed in the NAME section of the man (3) printf or man (3) puts
* The program returns 1
* The program compiles without any warnings when using the -Wall gcc option
