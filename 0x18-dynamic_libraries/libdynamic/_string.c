#include "../main.h"

/**
* _strcpy - Copies a string from source to destination.
* @dest: The destination string.
* @src: The source string.
*
* Return: The pointer to the destination string.
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while ((*dest++ = *src++))
		;
	return (start);
}

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
*
* Return: The pointer to the destination string.
*/
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}

/**
* _strncat - Concatenates n characters from src to dest.
* @dest: The destination string.
* @src: The source string.
* @n: The number of characters to concatenate.
*
* Return: The pointer to the destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}

/**
* _strncpy - Copies n characters from source to destination.
* @dest: The destination string.
* @src: The source string.
* @n: The number of characters to copy.
*
* Return: The pointer to the destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src != '\0' && n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	while (n-- > 0)
	{
		*dest = '\0';
		dest++;
	}

	return (start);
}

/**
* _strcmp - Compares two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: 0 if the strings are equal,
* if an integer less than 0 if s1 is less than s2,
* and an integer greater than 0 if s1 is greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
