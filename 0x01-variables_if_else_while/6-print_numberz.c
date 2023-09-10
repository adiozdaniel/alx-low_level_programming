#include <stdio.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0
 * we are not using printf
 * Return: 0 on success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}

	putchar('\n');
	return (0);
}
