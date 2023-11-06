#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number in the array (inclusive)
 * @max: maximum number in the array (inclusive)
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, diff, i;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min;
	ptr = malloc((diff + 1) * sizeof(int));
	for (i = 0; i <= diff; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
