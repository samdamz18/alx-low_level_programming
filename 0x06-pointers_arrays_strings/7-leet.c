#include "main.h"

/**
 * leet - encodes a string
 * @s: string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	int k, l;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (a[l] == s[k])
				s[k] = b[l];
		}
	}
	return (s);
}
