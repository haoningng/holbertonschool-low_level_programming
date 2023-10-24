#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed
 *
 * Return: none
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		_putchar(s[len - i - 1]);
	}
	_putchar('\n');
}
