#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string of which length to be returned
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
