#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, len;
	int *new_a = malloc(sizeof(int) * n);

	i = 0;
	len = n;
	while (i < n)
	{
		new_a[i] = a[len - 1];
		i++;
		len--;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = new_a[i];
	}

	free(new_a);
}
