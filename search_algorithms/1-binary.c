#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @lo: The integer on the left end
 * @hi: The integer on the right end
 */
void print_array(const int *array, size_t lo, size_t hi)
{
	size_t i;
	int first = 0;

	i = lo;
	printf("Searching in array: ");
	while (array && i <= hi)
	{
		if (first != 0)
			printf(", ");
		printf("%d", array[i]);
		first = 1;
		++i;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to seach for
 *
 * Return: first index where value is located, or -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid_point;
	int mid_value;
	int lo = 0;
	int hi = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (lo <= hi)
	{
		mid_point = (lo + hi) / 2;
		mid_value = array[mid_point];
		print_array(array, lo, hi);
		if (mid_value < value)
		{
			lo = mid_point + 1;
		}
		else if (mid_value > value)
		{
			hi = mid_point - 1;
		}
		else
		{
			return (mid_point);
		}
	}
	return (-1);
}
