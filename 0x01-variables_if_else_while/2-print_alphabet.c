#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	printf("\n");
	return (0);
}