#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: size of array
 * @c: charactor with which the array to be initialised
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned long i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(c));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(array); i++)
	{
		array[i] = c;
	}
	return (array);
}
