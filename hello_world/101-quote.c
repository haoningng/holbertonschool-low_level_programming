#include <stdio.h>
#include <string.h>
/**
 * main - Print a sentence followed by a new line
 *
 * Return: 1 (if successful)
 */
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	for (int i = 0; i < strlen(string); i++)
	{
		putchar(string[i]);
	}
	return (1);
}
