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
	int i, match, previous_match;
	int len = strlen(needle);

	while (*haystack)
	{
		for (i = 0; i < len; i++)
		{
			if (*haystack == needle[i])
			{
				match++;
				previous_match = 1;
				break;
			}
			else
			{
				previous_match = 0;
			}
		}
		if (match > 0) /* if char doesn't match after a matching char, reset match */
		{
			if (previous_match == 0)
			{
				match = 0;
			}
		}
		if (match == len) /* 1 extra '\0' character at the end */
		{
			return (haystack - (len - 1));
		}
		haystack++;
	}
	return (NULL);
}
