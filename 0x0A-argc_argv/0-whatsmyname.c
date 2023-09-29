#include <stdio.h>

/**
 * main - the program prints its name
 * @argc: argument count
 * @argv: arguments
 *
 * Return: zero on success
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
