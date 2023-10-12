#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sum
  * @a: first operand
  * @b: second operand
  * Return: return sum of the two args
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction
  * @a: first operand
  * @b: second operand
  * Return: return results two args
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication
  * @a: first operand
  * @b: second operand
  * Return: return multiplication of two args
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division function
   * @a: first operand
  * @b: second operand
  * Return: return division of two args
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - gets modulus of two operands
   * @a: first operand
  * @b: second operand
  * Return: return remainder of two args
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
