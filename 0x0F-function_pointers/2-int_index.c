#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: pointer to array
  * @size: size of array
  * @cmp: pointer to compare
  *
  * Return: index of 1st element or -1 or 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
		if (array != NULL && cmp != NULL)
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}

	return (-1);
}
