# 0x04. C - More functions, more nested loops

## 0. isupper

* checks for uppercase character.

### 0-isupper.c

* Prototype: ```c int _isupper(int c);```
* Returns 1 if c is uppercase
* Returns 0 otherwise

## 1. isdigit

* a function that checks for a digit (0 through 9).

### 1-isdigit.c

* Prototype: ```c int _isdigit(int c);```
* Returns 1 if c is a digit
* Returns 0 otherwise

## 2. Collaboration is multiplication

* a function that multiplies two integers.

### 2-mul.c

* Prototype: ```c int mul(int a, int b);```

## 3. The numbers speak for themselves

* a function that prints the numbers, from 0 to 9, followed by a new line.

### 3-print_numbers.c

* Prototype: ```c void print_numbers(void);```
* uses _putchar twice in the code

## 4. I believe in numbers and signs

* a function that prints the numbers, from 0 to 9, followed by a new line.

### 4-print_most_numbers.c

* Prototype: ```c void print_most_numbers(void);```
* Do not print 2 and 4
* uses _putchar twice in your code

## 5. Numbers constitute the only universal language

* a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

### 5-more_numbers.c

* Prototype: ```c void more_numbers(void);```
* uses _putchar three times in your code

## 6. The shortest distance between two points is a straight line

* a function that draws a straight line in the terminal.

### 6-print_line.c

* Prototype: ```c void print_line(int n);```
* Uses only _putchar function to print
* Where n is the number of times the character _ should be printed
* The line ends with a \n
* If n is 0 or less, the function should only print \n

## 7. I feel like I am diagonally parked in a parallel universe

* a function that draws a diagonal line on the terminal.

### 7-print_diagonal.c

* Prototype: ```c void print_diagonal(int n);```
* Uses only _putchar function to print
* Where ```n``` is the number of times the character ```\``` should be printed
* The diagonal ends with a ```\n```
* If ```n``` is ```0``` or less, the function only prints a ```\n```

## 8. You are so much sunshine in every square inch

* a function that prints a square, followed by a new line.

### 8-print_square.c

* Prototype: ```c void print_square(int size);```
* Uses only _putchar function to print
* Where size is the size of the square
* If size is 0 or less, the function prints only a new line
* Uses the character # to print the square

## 9. Fizz-Buzz

The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

* This is a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

### 9-fizz_buzz.c

* Each number or word should be separated by a space

## 10. Triangles

* a function that prints a triangle, followed by a new line.

### 10-print_triangle.c

* Prototype: ```c void print_triangle(int size);```
* uses only _putchar function to print
* Where size is the size of the triangle
* If size is 0 or less, the function prints only a new line
* I have used the character # to print the triangle

## 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic

* The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
* a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

### 100-prime_factor.c

* Uses the standard library
* This program will be compiled with this command: ```bash gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm```

## 12. Numbers have life; they're not just symbols on paper

* a function that prints an integer.

### 101-print_number.c

* Prototype: ```c void print_number(int n);```
* Uses only _putchar function to print
* long is not used
* arrays or pointers are not used
* There is no hard-coding of special values

@Eng. Adioz
