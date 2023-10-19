#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int a = 0, b = -1, c = -1, d;

	while (a < 8)
	{
		b = a + 1;
		while (b < 10)
		{
			c = a + 1;
			while (c < 10)
			{
				d = c + 1;
				while (d < 10)
				{
					if (a != c && b != d && c != d)
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(' ');
						putchar('0' + c);
						putchar('0' + d);
						if (!(a == 9 && b == 8 && c == 9 && d == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
