#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @Eng. Adioz
 * @array: array to execute func on
 * @size: the size of the array
 * @action:  a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
