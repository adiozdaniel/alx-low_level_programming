#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * using ternary statement instead of the legendary if
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n < 0 ? printf("%d is negative\n", n) : printf("%d is positive\n", n);
	return (0);
}
