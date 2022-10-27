#include "main.h"

/**
 * rot13 - function to encode a string
 * @s: string to encode
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[j] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == s[j])
			{
				s[j] = b[j];
				break;
			}
		}
	}
	return (s);
}
