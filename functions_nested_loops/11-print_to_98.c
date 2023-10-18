#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number to print from
 *
 * Return: none
 */
void print_to_98(int n)
{
	while (n <= 97)
	{
		printf("%i, ", n);

	}
	printf("98\n");
}
