#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a paraneter on an array
 * @array: an array to be executed upon
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i > size; i++)
	{
		(*action)(array[i]);
	}
}
