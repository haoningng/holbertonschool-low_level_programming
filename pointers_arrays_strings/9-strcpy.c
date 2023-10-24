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
char *_strcpy(char *dest, char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}
