#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character
 * Return: 1 if its a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
	return (1);
	else
		return (0);
}
