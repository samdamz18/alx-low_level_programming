#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: character of bytes
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
