#include "main.h"
#include <stdio.h>

/**
 * mynameis - prints the program's name, followed by a new line
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Nothing.
 */
void mynameis(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
}
