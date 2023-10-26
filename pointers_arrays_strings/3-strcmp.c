#include <stdbool.h>
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
	int difference;

	while (true)
	{
		difference = *s1 - *s2;
		if (difference > 0)
		{
			return (difference);
		}
		else if (difference < 0)
		{
			return (difference);
		}
		else
		{
			return (0);
		}
		s1++;
		s2++;
	}
}
