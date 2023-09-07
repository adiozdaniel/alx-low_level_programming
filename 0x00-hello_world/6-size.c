#include <stdio.h>

/**
*  main - main function of the application
*
*  Return: returns 0 on success
*/
int main(void)
{
	int a;
	long int b;
	char c;
	float d;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));

	return (0);
}
