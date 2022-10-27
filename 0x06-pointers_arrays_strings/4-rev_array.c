#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse contents of an array
 * @a: array to reverse
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n - 1)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
