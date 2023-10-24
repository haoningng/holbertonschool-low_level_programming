#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	j = 0;
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if ((s[i] - '0') < 10)
		{
			s[j] = s[i];
			j++;
		}
		s[j] = '\0';
		integer = atoi(s);
	}
	return (integer);
}
