#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number to print from
 *
 * Return: none
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 97)
		{
			printf("%i, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 99)
		{
			printf("%i, ", n);
			n--;
		}
	}
	printf("98\n");
}
