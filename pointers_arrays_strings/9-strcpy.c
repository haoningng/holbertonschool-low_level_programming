#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src) + 1;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
