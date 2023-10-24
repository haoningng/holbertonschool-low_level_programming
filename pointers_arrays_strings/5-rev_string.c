#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i, j, k;

	i = 0;
	j = strlen(s) - 1;
	while (i < j)
	{
		k = *(s + j)
		*(s + i) = *(s + j);
		*(s + j) = k;
		i++;
		j--;
	}
}
