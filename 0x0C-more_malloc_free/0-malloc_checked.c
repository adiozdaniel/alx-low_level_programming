#include "main.h"

/**
 * malloc_checked - it causes normal process termination
 * @b: allocated memory
 * Return: returns i
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
