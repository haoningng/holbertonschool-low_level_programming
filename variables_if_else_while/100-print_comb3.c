#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */
int main (void)
{
	int a = 0, b = 1;

	while (a < 9)
	{
		b = 1;
		while (b < 10)
		{
			if (b != a)
			{
				_putchar('0' + a);
				_putchar('0' + b);
			}
			b++;
		}
		a++;
	}
}
