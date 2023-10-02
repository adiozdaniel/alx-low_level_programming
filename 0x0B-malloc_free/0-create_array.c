#include "main.h"

/**
 * create_array - create array
 * @size: size of array
 * @c: size of array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *charArray = (char *)malloc((size + 1) * sizeof(char));

	if (charArray == NULL)
		return (NULL);

	for (int i = 0; i < size; i++)
		charArray[i] = c;

	charArray[size] = '\0';
	return (charArray);
}

/**
 * main - main function
 * Return: 0
*/
int main(void)
{
	int length = 10;
	char initialChar = 'A';

	char *charArray = create_array(length, initialChar);

	if (charArray != NULL)
	{
		for (int i = 0; charArray[i] != '\0'; i++)
			putchar(charArray[i]);
		putchar('\n');
		free(charArray);
	}
	else
		return (1);

	return (0);
}
