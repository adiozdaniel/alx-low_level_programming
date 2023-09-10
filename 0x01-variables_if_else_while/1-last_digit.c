#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main entry point
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	p = n % 10;
	printf("Last digit of %d is %d", n, p);

	if (p < 6 && p != 0)
	{
		printf(" and is less than 6 and not 0\n");
	} else if (p > 5)
	{
		printf(" and is greater than 5\n");
	} else if (p == 0)
	{
		printf(" and is 0\n");
	} else
	{
		printf("\n");
	}
	return (0);
}
