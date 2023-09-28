#include "main.h"

/**
 * str_checker - checks to see if two strings are the identical
 * @s1: string_1 base address
 * @s2: string_2 base address
 * @i: left index
 * @j: special index
 * Return: 1 on success or 0
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - this checks if strings are be identical
 * @s1: base address for string
 * @s2: base address for string
 * Return: check results
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
