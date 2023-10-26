#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: string after capitalization
 */
char *cap_string(char *str)
{
	int i, cap;
	char separators[] = {' ', '\t', '\n', ',', ':', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	char *new_str = str;

	cap = 1;
	while (*str)
	{
		if (cap && islower(*str))
		{
			*(str) -= 32;
		}
		cap = 0;
		for (i = 0; i < 13; i++)
		{
			if (*str == separators[i])
			{
				cap = 1;
			}
		}
		str++;
	}
	return (new_str);
}
