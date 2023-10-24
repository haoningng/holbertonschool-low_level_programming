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
	for (i = -1; i > -(len + 1); i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
