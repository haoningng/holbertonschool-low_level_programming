#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n:  number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *element;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		element = va_arg(ap, char *);
		if (element == NULL)
		{
			element = "(nil)";
		}
		if (i != (n - 1))
		{
			if (separator == NULL)
			{
				printf("%s", element);
			}
			else
			{
				printf("%s%s", element, separator);
			}
		}
		else
		{
			printf("%s", element);
		}
	}
	va_end(ap);
	printf("\n");
}
