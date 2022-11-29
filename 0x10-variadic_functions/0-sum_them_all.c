#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to sum
 * @n: numbers of integers to sum
 *
 * Return: sum of all paramaters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c, sum = 0;
	va_list vaList;

	if (n == 0)
	{
		return (0);
	}
	va_start(vaList, n);

	for (c = 0; c < n; c++)
		sum += va_arg(vaList, int);
	
	va_end(vaList);
	return (sum);
}
