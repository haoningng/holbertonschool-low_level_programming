#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime num
 * @n: input integer
 *
 * Return: 1 if input integer is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	int result = 0;

	if (n == 2 || n == 3)
	{
		result = 1;
	}
	else if (n > 3)
	{
		result = calculate_prime(n, 1);
	}

	return (result);
}

/**
 * calculate_prime - calculate prime number using formula 6(n) -/+ 1
 * @n: input number
 * @m: increment of n by 1
 *
 * Return: 1 if input integer is a prime number otherwise return 0
 */
int calculate_prime(int n, int m)
{
	if ((6 * m - 1) == n || (6 * m + 1) == n)
	{
		return (1);
	}
	else if ((6 * m - 1) > n || (6 * m + 1) > n)
	{
		return (0);
	}
	return (calculate_prime(n, (m + 1)));
}
