#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lowercase
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

/**
 * main - prints alphabet in lowercase
 * Return: o on success

int main(void)
{
	print_alphabet();
	return (0);
}
*/