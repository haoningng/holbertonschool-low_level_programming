#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

char *convert_to_bit(unsigned long int n);

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be searched through
 * @index: index of the bit of which value to be returned
 *
 * Return: the value of a bit at a given index, -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *str;
	unsigned int i;

	str = convert_to_bit(n);
	if (index > strlen(str))
		return (-1);
	for (i = 0; i < strlen(str); i++)
	{
		if (i == index)
			return (str[i] - '0');
	}
	return (0);
}

/**
 * convert_to_bit - convert an integer to bits in string
 * @n: integer to be converted
 *
 * Return: pointer to the string of bits
 */
char *convert_to_bit(unsigned long int n)
{
	int leading_zero, i, j, compare;
	unsigned long int bitmask;
	char *str;

	j = 0;
	str = malloc(sizeof(char) * 32);
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
				str[j] = '1';
			if (compare == 0)
				str[j] = '0';
			j++;
		}
		n = n << 1; /* move to next digit in n */
	}
	return (str);
}
