#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - appends the src str to dest str, up to n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = j = k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (k < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
