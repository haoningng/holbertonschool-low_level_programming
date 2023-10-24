#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i, j;

	char *str;

	str = malloc(sizeof(char) * (strlen(s) + 1));
	i = 0;
	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		str[i] = s[j - (i + 1)];
	}
	strcpy(s, str);
	free(str);
}
