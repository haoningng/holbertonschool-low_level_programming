#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1(n > 0) 0 (n == 0) -1 (n < 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
