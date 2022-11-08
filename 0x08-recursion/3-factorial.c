#include "main.h"

/**
 * factorial -function to calculate factorial
 * @n: integer
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
