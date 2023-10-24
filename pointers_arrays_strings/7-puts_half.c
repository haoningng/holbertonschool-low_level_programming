#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a string followed by a new line
 * @str: string to be printed
 *
 * Return: none
 */
void puts_half(char *str)
{
	int len, i, n;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = 0; i < len / 2; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = len - 1;
		for (i = 0; i < n / 2; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
