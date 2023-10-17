#include <stdio.h>

/**
 * main - Entry poitnt
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char c;
	int n;
	int i = 0;
	char end[] = "\n";

	c = 'z';
	n = c - 'a';
	while (n != 0)
	{
		putchar(c);
		c--;
		n = c - 'a';
	}
	while (i < 1)
	{
		putchar(end[i]);
		i++;
	}

	return (0);
}
