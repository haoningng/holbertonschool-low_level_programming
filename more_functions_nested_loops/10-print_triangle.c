#include "main.h"

/**
 * print_triangle - draw a triangle on the terminal
 * @size: the size of the triangle
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i, j, k, space;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			space = size - (i + 1);
			for (k = 0; k < space; k++)
			{
				_putchar(' ');
			}
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}