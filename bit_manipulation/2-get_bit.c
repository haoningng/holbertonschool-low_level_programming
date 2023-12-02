#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be searched through
 * @index: index of the bit of which value to be returned
 *
 * Return: the value of a bit at a given index, -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > (sizeof(n) * 8))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
