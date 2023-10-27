#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the 2D array
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
