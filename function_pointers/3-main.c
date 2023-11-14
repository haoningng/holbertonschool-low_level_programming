#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the number of command argument
 * @argv: command argument given in string
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int answer;
	int (*func)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	func = get_op_func(argv[2]);
	if (func ==  NULL)
	{
		printf("Error\n");
		return (99);
	}
	answer = func(atoi(argv[1]), atoi(argv[3]));
	if (answer == -1)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", answer);
	return (0);
}
