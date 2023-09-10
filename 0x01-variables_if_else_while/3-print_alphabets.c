#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * and then in upper case
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	printf("\n");
	return (0);
}
