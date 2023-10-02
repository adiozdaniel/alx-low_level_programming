#include "main.h"

/**
 * create_array - create array
 * @size: size of array
 * @c: character input
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *)malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
