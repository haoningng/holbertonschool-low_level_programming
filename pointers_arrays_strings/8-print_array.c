#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers followed by new line
 * @a: array of integers
 * @n: number of elements
 * 
 * Return: none
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
		printf("a[i]");
	}
	printf("\n");
}
