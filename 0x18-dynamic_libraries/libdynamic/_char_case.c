#include "../main.h"

/**
 * _islower - Checks for a lowercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is lowercase,
 * 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isupper - Checks for an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isalpha - Checks for an alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if the character is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	return (_islower(c) || (_isupper(c)));
}

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
