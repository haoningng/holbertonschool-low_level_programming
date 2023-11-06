#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to a new string which is a copy of the string str
 * @str: string from which the new string is copied
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	int i;
	char *array;
	int size = strlen(str);

	if (*str == NULL)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char) + 1);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	array[size] = '\0';
	return (array);
}
