#include "main.h"
#include <string.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 *
 * Return: none
 */
void _puts(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n')
}
