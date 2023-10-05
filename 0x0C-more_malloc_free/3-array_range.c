#include <stdlib.h>
#include "main.h"

/**
 * *array_range - it creates an array of integers
 * @min: the minimum range of values
 * @max: the maximum range of values
 * Return: returns pointer of the created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
