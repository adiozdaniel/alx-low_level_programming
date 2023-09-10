#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * but it excludes q and e
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	printf("\n");
	return (0);
}
