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
			if (islower(*(str + i)))
			{
				*(str + i) -= 32;
			}
		}
		else if (!((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A') ||
			(*str == '6') || (*str == '0') || (*str == '1') || (*str == '2') ||
			(*str == '3') || (*str == '4') || (*str == '5') || (*str == '-')))
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
					if (str[j - 1] == '6')
					{
						break;
					}
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
