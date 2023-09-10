#include <stdio.h>

/**
 * main - prints all possible different combinations
 * of three digit numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	for (int a = 0; a < 8; a++)
	{
		for (int b = a + 1; b <= 8; b++)
		{
			for (int c = a + 2; c <= 9; c++)
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
