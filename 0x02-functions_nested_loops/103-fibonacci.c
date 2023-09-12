#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci sequence
 * Return: always 0.
 */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fibo1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fibo1 = fibo2;
		fibo2 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
