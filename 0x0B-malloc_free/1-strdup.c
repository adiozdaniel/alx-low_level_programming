#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: input string
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
