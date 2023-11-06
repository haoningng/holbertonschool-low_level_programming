#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *array;
	int size1, size2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	array = malloc((size1 + size2) * sizeof(char) + 1);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		array[i + size1] = s2[i];
	}
	array[size1 + size2] = '\0';
	return (array);
}
