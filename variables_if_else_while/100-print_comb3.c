#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int a = 0, b = 1;

	while (a < 9)
	{
		b = a + 1;
		while (b < 10)
		{
			if (b != a)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (!(a == 8 && b == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
