#include <unistd.h>

/**
 * _putchar - it writes the character c to stdout
 * @c: The character to print
 *
 * Return: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
