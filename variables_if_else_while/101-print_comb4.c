#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int a = 0, b = 1, c = 1;

	while (a < 8)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				if (b != a && c != a && b != c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
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
