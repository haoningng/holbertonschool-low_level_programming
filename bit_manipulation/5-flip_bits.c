#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip to get next num
 * @n: number before flipping
 * @m: number after flipping
 *
 * Return: num of bits you need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int count;

	count = 0;
	difference = n ^ m;
	while (difference != 0)
	{
		count = count + (difference & 1);
		difference = difference >> 1;
	}
	return (count);
}
