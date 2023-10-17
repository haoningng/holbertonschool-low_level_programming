#include <stdio.h>

/**
 * main - Entry poitnt
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char c, d;
	int n;
	int i = 0;
	char end[] = "\n";

	c = 'a';
	n = c - 'a';
	while (n < 26)
	{
		putchar(c);
		c++;
		n = c - 'a';
	}
	d = 'A';
        n = d - 'A';
        while (n < 26)
        {
                putchar(d);
                d++;
                n = d - 'A';
        }
	while (i < 1)
	{
		putchar(end[i]);
		i++;
	}

	return (0);
}
