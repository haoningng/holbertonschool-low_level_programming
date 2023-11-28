#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: number to be searched through
 * @index: index of the bit of which value to be set to 0
 *
 * Return: 1 if it worked, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	/* sizeof unsigned long int (bytes) x 8 bits */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bitmask = 1 << index;
	bitmask = ~bitmask;
	*n = *n & bitmask;
	return (1);
}
