#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
