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
	int minus_count, integer;

	minus_count = integer = 0;
	while (*s)
	{
		if (*s <= '9' && *s >= '0')
		{	
			/* move position to next position, + integer value of char */
			integer = integer * 10 + (*s - '0');
		}
		else if (*s == '-')
		{
			minus_count++;
		}
		s++;
	}
	if (minus_count % 2 != 0)
	{
		integer = integer * -1;
	}
	return (integer);
}
