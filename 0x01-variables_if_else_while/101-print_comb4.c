#include <stdio.h>

/**
 * main - prints all possible different combinations
 * of three digit numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = a + 2; c <= 9; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
				break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
