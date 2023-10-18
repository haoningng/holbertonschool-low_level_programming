#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 (if c is lowercase) 0 (otherwise)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
