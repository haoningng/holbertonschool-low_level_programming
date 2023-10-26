#include <stdlib.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 (if match) >0 (if s1 > s2) <0 (if s1 < s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (TRUE)
	{
		while (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
