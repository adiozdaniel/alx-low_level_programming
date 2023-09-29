#include <stdio.h>

/**
 * main - the program prints all arguments
 * @argc: argument count
 * @argv: arguments
 *
 * Return: zero on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
