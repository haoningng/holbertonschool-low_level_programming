#include "3-calc.h"

/**
 * op_add - add a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a by b
 * @a: first integer
 * @b: second integer
 *
 * Return:the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first intger
 * @b: second integer
 *
 * Return: the result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a % b);
}
