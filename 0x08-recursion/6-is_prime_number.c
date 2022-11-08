#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n / 1 == n || n / n == 1)
	{
		return (1);
	}
	return (0);
}
