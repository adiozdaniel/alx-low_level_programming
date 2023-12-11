#include "../main.h"

/**
* _atoi - Converts a string to an integer.
* @s: The string.
*
* Return: The converted integer.
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s++ == '-') ? -1 : 1;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		/* Check for potential overflow*/
		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + digit;
		s++;
	}

	return (sign * result);
}
