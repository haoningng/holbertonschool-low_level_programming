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

	/* if the first element is an integer, apply atoi() */
	if ((s[0] - '0') < 10 && ((s[0] - '0') > 0))
	{
		integer = atoi(s);
	}
	/* else, remove the first element using delete() until we found int */
	else
	{
		do
		{
			delete(s, 0);
		} while (!((s[0] - '0') < 10 && !((s[0] - '0') > 0)));
		/* then, apply atoi() */
		integer = atoi(s);
	}
	return (integer);
}

/**
 * delete - deletes the first element of the string
 * @s: the string
 * @pos: the position of element to be deleted i.e. first element
 *
 * Return: the new string
 */
char *delete(char *s, int pos)
{
	int i, len;

	len = strlen(s);
	i = pos; /* pos = 0 i.e. first element */
	while (i < len - 1)
	{
		s[i] = s[i + 1]; /* move the next element backward i.e. deleting the first element */
		i++;
	}
	return (s);
}
