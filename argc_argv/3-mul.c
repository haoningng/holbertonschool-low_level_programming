#include <stdio.h>
#include "main.h"

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = argv[1] * argv[2];
	printf("%d\n", i);
	return (0);
}
