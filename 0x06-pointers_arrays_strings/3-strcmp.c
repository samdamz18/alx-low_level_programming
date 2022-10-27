#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function to compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return:difference of the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] != 0 && s2[j] != 0 && (s1[j] == s2[j]))
	{
		j++;
	}
	return (s1[j] - s2[j]);
}
