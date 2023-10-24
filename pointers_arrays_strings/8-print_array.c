#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of array followed by a new line
 * @a: array of integers
 * @n: number of elements to be printed
 *
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%i", a[i]);
	}
	printf("\n");
}
