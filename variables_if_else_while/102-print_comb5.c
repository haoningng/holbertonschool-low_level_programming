#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int a = 0, b = 0, c = 0, d = 1;

	while (a < 8)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (b > 0)
				{
					d = b + 1;
				}
				else
				{
					d = 0;
				}
				while (d < 10)
				{
					if (!(a == c && b == d))
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
