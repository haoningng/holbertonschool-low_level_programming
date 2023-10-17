#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
