#include <limits.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int leading_zero, i, compare;
	unsigned long int bitmask;

	if (n == 0)
		_putchar('0');
	leading_zero = 1; /* keep track of leading zeroes in n */
	bitmask = 1 << 31; /* for 32-bit integers */
	for (i = 0; i < 32; i++)
	{
		/* use '&' to find the first non-zero binary in n */
		/**
		 * eg compare = n & bitmask
		 * 1000 0000 (bitmask)
		 * 0000 0001 (n)
		 * result: 0000 0000 (compare = 0)
		 */
		compare = n & bitmask;
		if (compare != 0 && leading_zero == 1)
		{
			/* as soon as the first non-zero is found in n */
			/* change leading_zero to 0 */
			leading_zero = 0;
		}
		if (leading_zero == 0)
		{
			if (compare != 0)
				_putchar('1');
			if (compare == 0)
				_putchar('0');
		}
		n = n << 1; /* move to next digit in n */
	}
}
