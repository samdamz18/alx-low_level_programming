#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function to print all
 * @format: number of strings
 */
void print_all(const char * const format, ...)
{
	unsigned int c, j, i = 0;
	char *p;
	const char arguments[] = "cifs";
	va_list vaList;

	va_start(vaList, format);
	while (format && format[c])
	{
		j = 0;
		while (arguments[j])
		{
			if (format[c] == arguments[j] && i)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[c])
		{
		case 'c':
			printf("%c", va_arg(vaList, int)), i = 1;
			break;
		case 'i':
			printf("%d", va_arg(vaList, int)), i = 1;
			break;
		case 'f':
			printf("%f", va_arg(vaList, double)), i = 1;
			break;
		case 's':
			p = va_arg(vaList, char *), i = 1;
			if (!p)
			{
				printf("(nil)");
				break;
			}
			printf("%s", p);
			break;
		} c++;
	}
	printf("\n"), va_end(vaList);
}
