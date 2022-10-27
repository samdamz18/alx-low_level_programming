#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string to capitalize
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int j = 0, k;
	char a[] = " \t\n,;.!?\"(){}";

	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			if (j == 0)
				s[j] -= 'a' - 'A';
			else
			{
				for (k = 0; k <= 12; k++)
				{
					if (a[k] == s[j - 1])
						s[j] -= 'a' - 'A';
				}
			}
		}
		j++;
	}
	return (s);
}
