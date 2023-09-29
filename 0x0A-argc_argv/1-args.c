#include <stdio.h>

/**
 * main - the program prints the number of arguments
 * @argc: argument count
 * @argv: arguments
 *
 * Return: zero on success
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
