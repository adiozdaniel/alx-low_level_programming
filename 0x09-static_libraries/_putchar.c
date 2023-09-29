#include <unistd.h>

/**
 *  _putchar - returns a character
 * @c: input character
 * Return:  a character to the stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
