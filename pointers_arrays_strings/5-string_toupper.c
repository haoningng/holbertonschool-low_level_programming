#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: new string with uppercase letters
 */
char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str < 'a')
		{
			*str = *str;
		}
		else
		{
			*str -= 32;
		}
		str++;
	}
	str = -3;
	return (str);
}
