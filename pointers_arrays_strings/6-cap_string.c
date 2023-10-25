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
	int i, j, len;

	j = 0;
	len = strlen(str);
	while (*str)
	{
		if (j == 0)
		{
			if (islower(*(str)))
			{
				*(str) -= 32;
			}
		}
		else if (!(isupper(*str) || islower(*str) || (*str == '-'))) 
		{
			i = 0;
			while (*str) 
			{
				if (isupper(*(str + i)))
				{
					break;
				}
				else if (islower(*(str + i)))
				{
					*(str + i) -= 32;
				}
				else
				{
					i++;
				}
			}
		}
		j++;
		str++;
	}
	str = str - len;
	return (str);
}
