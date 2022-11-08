#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of command line arguments
 * @argv: array that contains program command line
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
