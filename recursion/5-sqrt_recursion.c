#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be examined
 *
 * Return: natural square root of a number / -1 if n doesn't have a nat sq root
 */
int _sqrt_recursion(int n)
{
	int result = -1;

	result = _sqrt_step(n, 1);
	if (result < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		result = _sqrt_step(n, 1);
	}
	return (result);
}

/**
 * _sqrt_step - return the natural square root of a number
 * @n: the number to be tested
 * @m: odd numbers
 *
 * Return: square root to be returned
 */
int _sqrt_step(int n, int m)
{
	if (n - m == 0)
	{
		return (1);
	}
	else if (n - m <= 0)
	{
		return (-1000);
	}
	return (1 + _sqrt_step((n - m), (m + 2)));
}
