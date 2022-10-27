#include "main.h"

/**
 * print_number - print integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
