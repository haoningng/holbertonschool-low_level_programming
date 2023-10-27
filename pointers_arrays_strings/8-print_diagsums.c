#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of square matrix of int
 * @a: the 2D array
 * @size: size of the square matrix of integers
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_int1, sum_int2, total1, total2;

	sum_int1 = 0;
	sum_int2 = size - 1;
	total1 = total2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == sum_int1)
			{
				total1 += *(a + (i * size + sum_int1));
			}
			if (j == sum_int2)
			{
				total2 += *(a + (i * size + sum_int2));
			}
		}
		sum_int1++;
		sum_int2--;
	}	
	printf("%i, %i\n", total1, total2);
}
