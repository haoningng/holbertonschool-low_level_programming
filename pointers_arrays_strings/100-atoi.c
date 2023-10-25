#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char *delete(char *s, int pos);

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int integer;

	if ((s[0] - '0') < 10 && ((s[0] - '0') > 0))
	{
		integer = atoi(s);
	}
	else
	{
		while (!((s[0] - '0') < 10 && !((s[0] - '0') > 0)))
		{
			delete(s, 0);
		}
		integer = atoi(s);
	}
	return (integer);
}

/**
 * delete - deletes the first element of the string
 * @s: the string
 * @pos: the position of element to be deleted
 *
 * Return: the new string
 */
char *delete(char *s, int pos)
{
	int i, len;

	len = strlen(s);
	for (i = pos; i < len - 1; i++)
	{
		s[i] = s[i + 1];
	}
	return(s);
}
