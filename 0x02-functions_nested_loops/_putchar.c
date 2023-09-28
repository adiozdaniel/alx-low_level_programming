#include <stdio.h>

/**
* _putchar - writes a character to the stdout
* @c: the input character
* Return: returns 1byte and the character
*/

int _putchar(char c)
{
	return (putchar(c));
	/* return (write(1, &c, 1)); */
}
