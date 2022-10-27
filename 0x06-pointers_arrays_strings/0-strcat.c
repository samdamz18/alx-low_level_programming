#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
