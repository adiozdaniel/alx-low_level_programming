#include <stdio.h>

/**
 * main - prints all possible combinations of
 * two two-digit numbers.
 *
 * Return: 0 on success
 */

int main(void)
{
	int combination1, combination2;

	for (combination1 = 0; combination1 < 100; combination1++)
	{
		for (combination2 = 0; combination2 < 100; combination2++)
		{
			if (combination1 < combination2)
			{
				putchar((combination1 / 10) + 48);
				putchar((combination1 % 10) + 48);
				putchar(' ');
				putchar((combination2 / 10) + 48);
				putchar((combination2 % 10) + 48);

				if (combination1 != 98 || combination2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
