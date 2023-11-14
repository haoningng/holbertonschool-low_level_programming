#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int element;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		element = va_arg(ap, int);
		if (i != (n - 1))
		{
			printf("%d, ", element);
		}
		else
		{
			printf("%d\n", element);
		}
	}
	va_end(ap);
}
