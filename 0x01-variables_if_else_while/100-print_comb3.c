#include <stdio.h>

/**
 * main - prints all possible different combinations
 * of two digit numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int y = i + 1; y <= 9; y++)
		{
			putchar((i % 10) + '0');
			putchar((y % 10) + '0');

			if (i == 8)
			break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
