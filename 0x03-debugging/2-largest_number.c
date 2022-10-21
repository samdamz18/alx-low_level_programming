#include "main.h"

/**
 * largest number - return largest of 3 integers
 * @a: integer 1
 * @b: integer 2
 * @c: integer 3
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
