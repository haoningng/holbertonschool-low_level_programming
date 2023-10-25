#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies the src str to dest str, up to n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
