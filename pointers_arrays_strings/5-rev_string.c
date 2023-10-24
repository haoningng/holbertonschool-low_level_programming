#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: none
 */
void rev_string(char *s)
{
	*s = strrev(s);
}
