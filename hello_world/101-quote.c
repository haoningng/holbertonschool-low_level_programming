#include <stdio.h>
#include <string.h>
/**
 * main - Print a sentence followed by a new line
 *
 * Return: 1 (if successful)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
	int j = strlen(str);

	for (i = 0; i < j; i++)
	{
		putchar(str[i]);
	}
	return (1);
}
