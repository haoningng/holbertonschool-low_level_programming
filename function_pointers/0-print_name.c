#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name in string to be printed
 * @f: function pointer that takes a string as argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
