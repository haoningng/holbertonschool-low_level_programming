#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int len, i, j, integer;
	char str[100];

	j = 0;
	for (i = 0; i < len; i++)
	{
		if ((s[i] - 'A') < 27 || (s[i] - 'a') < 27)
		{
			str[j] = s[i];
			j++;
		}
		integer = atoi(str);
	}
	return (integer);
}
