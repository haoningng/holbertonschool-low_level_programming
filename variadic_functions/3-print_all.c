#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"


/**
 * print_char - prints a character
 * @args: arguments
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int)); /* char is self-promoted to int */
}

/**
 * print_int - prints an integer
 * @args: arguments
 *
 * Return: Nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: arguments
 *
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double)); /* float is promoted to double */
}

/**
 * print_str - prints a string
 * @args: arguments
 *
 * Return: Nothing
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	str != NULL ? printf("%s", str) : printf("(nil)");
}

/**
 * print_all - prints anything, followed by a new line.
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;

	print_type arg_formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	va_start(args, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (arg_formats[j].format_type)
		{
			if (arg_formats[j].format_type == format[i])
			{
				arg_formats[j].f(args);
				if (format[i + 1])
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
