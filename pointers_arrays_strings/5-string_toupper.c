#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 *
 * Return: new string with uppercase letters
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		*str = *str - 32;
		i++;
	}
	return (str);
}
