#include <stdio.h>

/**
 * main - Entry point
 *
 * Return = 0 if succesful
 */
int main(void)
{
	char c;
	int n;

	c = 'a';
	n = c - 'a';
	while (n < 26)
	{
		putchar(c);
		c++;
	}
	return (0);
}
