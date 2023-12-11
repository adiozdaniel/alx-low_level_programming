#include "../main.h"

/**
* _islower - Checks for a lowercase letter.
* @c: The character to check.
*
* Return: 1 if the character is lowercase,
* 0 otherwise.
*/
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
* _isupper - Checks for an uppercase letter.
* @c: The character to check.
*
* Return: 1 if the character is uppercase, 0 otherwise.
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
* _isalpha - Checks for an alphabetic character.
* @c: The character to check.
*
* Return: 1 if the character is an alphabetic character, 0 otherwise.
*/
int _isalpha(int c)
{
	return (_islower(c) || (_isupper(c)));
}

/**
* _abs - Computes the absolute value of an integer.
* @n: The integer.
*
* Return: The absolute value of the integer.
*/
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
* _isdigit - Checks for a digit (0 through 9).
* @c: The character to check.
*
* Return: 1 if the character is a digit, 0 otherwise.
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
* _atoi - Converts a string to an integer.
* @s: The string.
*
* Return: The converted integer.
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-' || *s == '+')
		sign = (*s++ == '-') ? -1 : 1;

	while (*s >= '0' && *s <= '9')
		result = result * 10 + (*s++ - '0');

	return (sign * result);
}

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

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _puts - Writes a string to the standard output.
* @s: The string to write.
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

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

	while (*s != '\0' && accept != NULL && _strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}


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
