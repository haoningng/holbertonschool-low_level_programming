#include <stdio.h>

/**
 * main - Entry poitnt
 *
 * Return = 0 (Successful)
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
		n = c - 'a';
	}
	return (0);
}
