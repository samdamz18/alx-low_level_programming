#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: string to change
 * Return: string
 */
char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] -= 'a' - 'A';
		}
		j++;
	}
	return (s);
}
