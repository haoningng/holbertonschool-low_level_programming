#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be examined
 * @accept: substring
 *
 * Return: pointer to the byte in s that matches bytes in accept/ NULL if nil
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int len = strlen(accept);

	while (*s)
	{
		for (i = 0; i < len; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
