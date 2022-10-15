#include <stdio.h>

/**
 * main - prints all numbers of base 10 in lowercase
 *
 * Return: Always o
 */
int main(void)
{
	int i;
	char l;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
