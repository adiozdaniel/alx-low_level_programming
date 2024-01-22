#include "../main.h"

/**
* _memset - Fills the first n bytes
* of the memory area pointed to by s with the constant byte b
* @s: The pointer to the memory area.
* @b: The constant byte.
* @n: The number of bytes to fill.
*
* Return: The pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n-- > 0)
	{
		*s = b;
		s++;
	}

	return (start);
}

/**
* _memcpy - Copies n bytes from source to destination.
* @dest: The destination buffer.
* @src: The source buffer.
* @n: The number of bytes to copy.
*
* Return: The pointer to the destination buffer.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (start);
}

/**
* _strlen - Computes the length of a string.
* @s: The string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* _strspn - Calculates the length of the initial segment of s
* that consists only of bytes from accept.
* @s: The string.
* @accept: The characters to accept.
*
* Return: The number of bytes in the initial segment of s
* consisting only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && accept != NULL && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
