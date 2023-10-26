#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be examined
 * @accept: substring
 *
 * Return: no. of bytes in initial segment of s consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int bytes = 0;
	int len = strlen(accept);
	int match = 0; /* 0 = no match; 1 = match found */

	while (*s)
	{
		match = 0;
		for (i = 0; i < len; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				match = 1;
				break;
			}
		}
		if (match == 0) /* as soon as no match found */
		{
			return (bytes);
		}
		s++;
	}
	return (bytes);
}
