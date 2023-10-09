#include <stdio.h>
/**
 *main - this prints the name of the compiled file
 *Return: 0
*/

int main(void)
{
	char *file = __FILE__;

	printf("%s\n", file);
	return (0);
}
