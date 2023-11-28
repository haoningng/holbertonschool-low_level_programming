#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	char *string;
	int quotient, remainder, i, strlength;
	unsigned int base;

	string = malloc(15 * sizeof(char));
	if (string == NULL)
		free(string);
	base = 2;
	quotient = n;
	i = 0;
	if (quotient == 0)
		_putchar('0');
	while (quotient > 0)
	{
		remainder = quotient % base;
		if (remainder == 1)
			string[i] = '1';
		if (remainder != 1)
			string[i] = '0';
		i++;
		quotient = (quotient - remainder) / base;
	}
	strlength = strlen(string);
	for (i = strlength - 1; i >= 0; i--)
	{
		_putchar(string[i]);
	}
	free(string);
}
