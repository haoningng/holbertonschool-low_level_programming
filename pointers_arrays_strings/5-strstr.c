#include <string.h>
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be examined
 * @needle: substring
 *
 * Return: pointer to the beginning of substring / NULL if nil
 */
char *_strstr(char *haystack, char *needle)
{
	int i, match;
	int len = strlen(needle);

	while (*haystack)
	{
		match = 0;
		for (i = 0; i < len; i++)
		{
			if (*s == needle[i])
			{
				match = 1;
			}
			else
			{
				match = 0;
				break;
			}
		}
		if (match == 1)
		{
			return (haystack - len);
		}
		s++;
	}
	return (NULL);
}
