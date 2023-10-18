#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number to be examined
 *
 * Return: last digit of a number
 */
int print_last_digit(int i)
{
	int last_digit = abs(i % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
