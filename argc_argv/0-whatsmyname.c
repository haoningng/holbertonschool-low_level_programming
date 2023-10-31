#include "main.h"
#include <stdio.h>

/**
 * main - prints the program's name, followed by a new line
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Nothing.
 */
void main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
}
