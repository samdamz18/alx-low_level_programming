#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of command line arguments
 * @argv: array that contains program command line
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
