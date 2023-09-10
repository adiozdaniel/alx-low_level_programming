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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int i = n % 10;

	printf("Last digit of %d is %d", n, i);

	if (i < 6 && i != 0)
	{
		printf(" and is less than 6 and not 0\n");
	} else if (i > 5)
	{
		printf(" and is greater than 5\n");
	} else if (i == 0)
	{
		printf(" and is 0\n");
	} else
	{
		printf("\n");
	}
	return (0);
}
