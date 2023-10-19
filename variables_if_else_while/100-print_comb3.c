#include <stdio.h>

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
				putchar('0' + a);
				putchar('0' + b);
			}
			b++;
		}
		a++;
	}
	return (0);
}
