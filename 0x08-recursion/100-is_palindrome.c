#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks for empty string
 * @s: string
 *
 * Return: string
 */
int is_palindrome(char *s)
{
	int flag, l = strlen(s);

	if (*s != *(s + l))
	{
		return (0);
	}
	if (*s == 0)
	{
		return (1);
	}
	if (is_palindrome(s + 1) == (l - 2))
		flag = 1;
	else
		flag = 0;

	return (flag);
}
