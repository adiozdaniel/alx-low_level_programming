#include "../main.h"

/**
* _strchr - Locates the first occurrence of a character in a string.
* @s: The string.
* @c: The character to locate.
*
* Return: The pointer to the first occurrence of c in s,
* or NULL if c is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;

	return ((*s == c) ? s : NULL);
}

/**
* _strstr - Locates the first occurrence of the
* null-terminated string needle
* in the null-terminated string haystack.
* @haystack: The string to search in.
* @needle: The string to search for.
*
* Return: The pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;

		char *sub = needle;

		while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string.
* @accept: The set of bytes to search for.
*
* Return: The pointer to the first occurrence in s
* of any of the bytes in accept,
* or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
			return (s);
		s++;
	}

	return (NULL);
}
