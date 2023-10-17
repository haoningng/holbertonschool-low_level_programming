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

	c = 'a';
	n = c - 'a';
	while (n < 26)
	{
		if (c != 'e' || c != 'q')
		{
			putchar(c);
		}
		c++;
		n = c - 'a';
	}
	while (i < 1)
	{
		putchar(end[i]);
		i++;
	}

	return (0);
}
