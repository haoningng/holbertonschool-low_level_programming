#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number to be examined
 *
 * Return: last digit of a number
 */
int print_last_digit(int i)
{
	int xabs_last_digit = i % 10;
	int last_digit = _abs(xabs_last_digit);

	_putchar('0' + last_digit);
	return (last_digit);
}
