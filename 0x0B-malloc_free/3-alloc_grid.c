#include "main.h"

/**
 * alloc_grid - a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **dimension;

	if (width <= 0 || height <= 0)
		return (NULL);

	dimension = (int **)malloc(height * sizeof(int *));

	if (dimension == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dimension[i] = (int *)malloc(width * sizeof(int));
		if (dimension[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(dimension[j]);
			free(dimension);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			dimension[i][j] = 0;
	}

	return (dimension);
}
