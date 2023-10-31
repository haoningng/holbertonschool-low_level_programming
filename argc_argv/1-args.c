#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
