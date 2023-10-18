#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphebet, in lowercase, followed by a new line
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int alpha;
	int time = 0;

	while (time < 10)
	{
		alpha = 0;
		while (alpha < 26)
		{
			_putchar('a' + alpha);
			alpha++;
		}
		_putchar('\n');
		time++;
	}
}

