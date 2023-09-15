#include "main.h"

/**
 * positive_or_negative - entry point
 * using ternary statement instead of the legendary if
 * @i: the input
 * Return: 0 on success
 */

void positive_or_negative(int i)
{
	/*
    * srand(time(0));
	* n = rand() - RAND_MAX / 2;
    */

	if (i < 0)
	{
		printf("%d is negative\n", i);
	} else if (n > 0)
	{
		printf("%d is positive\n", i);
	} else
	{
		printf("%d is zero\n", i);
	}
}
