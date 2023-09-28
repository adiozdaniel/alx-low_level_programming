#include <stdio.h>

/**
 * main - prints all the numbers
 * of base 16 in lowercase using putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 0;
	char c;

	for (; i < 10; i++)
		putchar ((i % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
