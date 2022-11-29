#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @n: numbers of integers to print
 * @separator: string to print
 *
 * Return: sum of all paramaters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list vaList;

	va_start(vaList, n);

	for (c = 1; c <= n; c++)
	{
		printf("%i", va_arg(vaList, int));
		if (c < n && separator)
		{
			printf("%s", separator);
		}
		else
		{
			;
		}
	}
	printf("\n");
	va_end(vaList);
}
