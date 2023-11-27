#include <math.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the convered number, or 0 if there >=1 chars in the b isnt 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int strlength, i;
	unsigned int integer, converted_int, base, multiplier;

	strlength = strlen(b);
	integer = converted_int = 0;
	multiplier = base = 2;
	for (i = strlength - 1; i >= 0; i--)
	{
		if (b[i] > '9' || b[i] < '0')
			return (0);
		integer = b[i] - '0';
		if (i == strlength - 1)
		{
			converted_int = converted_int + (1) * integer;
		}
		else
		{
			converted_int = converted_int + multiplier * integer;
			multiplier = multiplier * base;
		}
	}
	return (converted_int);
}
