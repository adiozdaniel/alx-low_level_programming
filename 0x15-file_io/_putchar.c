#include <unistd.h>

/**
 *  _putchar - returns a character
 * @c: input character
 * Return:  a character to the stdout
 * Copyright to Eng. Adioz
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
