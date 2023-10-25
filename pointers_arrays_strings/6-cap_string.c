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
	int i, len;

	len = strlen(str);
	while (*str)
	{
		if (!((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A')))
		{
			i = 0;
			while (*str)
			{
				if (*(str + i) <= 'Z' && *(str + i) >= 'A')
				{
					break;
				}
				else if (*(str + i) <= 'z' && *(str + i) >= 'a')
				{
					*(str + i) -= 32;
				}
				else 
				{
					i++;
				}
			}
		}
		str++;
	}
	str = str - len;
	return (str);
}
