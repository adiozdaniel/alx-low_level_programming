#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * _putchar - wries a character to stdout
 * print_alphabet - prints _putchar, followed by a new line.
 * prints the alphabet, in lowercase, followed by a new line.
 * print_alphabet_x10 - 10 times the alphabet, in lowercase
 * _islower - checks for lowercase character.
 * _isalpha - checks for alphabetic character.
 * print_sign - prints the sign of a number.
 * _abs - computes the absolute value of an integer.
 * print_last_digit - prints the last digit of a number.
 * jack_bauer - prints every minute of the day of Jack Bauer
 * times_table - prints the 9 times table, starting with 0
 * add - adds two integers and returns the result.
 * print_to_98 - prints all natural numbers from n to 98
 * print_times_table - prints the n times table, starting with 0.
 */

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif /* MAIN_H by Adioz */
