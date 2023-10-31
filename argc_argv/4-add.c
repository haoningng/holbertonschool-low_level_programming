#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[i]);
	}
	printf("%d\n", i);
	return (0);
}
