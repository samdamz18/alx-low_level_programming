#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: string
 * @n: number of strings
 *
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	char *p;
	va_list vaList;

	va_start(vaList, n);

	for (c = 1; c <= n; c++)
	{
		p = va_arg(vaList, char*);

		if (p)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
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
