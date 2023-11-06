#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements to be allocated memory
 * @size: size in bytes of each element to be allocated memory
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
