#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 *
 * Return: none
 */
void print_alphabet(void)
{
	int alpha = 0;

	while (alpha < 26)
	{
		_putchar('a' + alpha);
		alpha++;
	}
	_putchar('\n');
}
