#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 (if c is a letter lower/upper) 0 (otherwise)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
