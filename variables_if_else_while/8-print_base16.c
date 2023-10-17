#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	c = 'a';
	n = c - 'a';
	while (n < 6)
	{
		putchar(c);
		c++;
		n = c - 'a';
	}
	putchar('\n');
	return (0);
}
