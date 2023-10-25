#include <stdio.h>
#include <stdlib.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: string after capitalization
 */
char *cap_string(char *str)
{
	int i;

	while (*str)
	{
		if (!(*str <= 'z' || *str >= 'a' || *str <= 'Z' || *str >= 'A'))
		{
			i = 0;
			while (!(*(str + i) <= 'z' || *(str + i) >= 'a'))
			{
				i++;
			}
			*(str + i) -= 32;
		}
		str++;
	}
	return (str);
}
