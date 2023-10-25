#include <string.h>
#include "main.h"

/**
 * _strcat - appends the src str to dest str
 * @dest: destination string
 * @src: source string
 *
 * Return: Resulting destination string
 */
char *_strcat(char *dest, char *src)
{
	int len_s, len_d, new_len;
	char *new_string;

	len_d = strlen(dest);
	len_s = strlen(src);
	new_len = len_d + len_s;
	while (*dest)
	{
		*new_string = *dest;
		new_string++;
		dest++;
	}
	dest = dest + len_d;
	while (*src)
	{
		*new_string = *src;
		*dest = *src;
		new_string++;
		src++;
		dest++;
	}
	*(new_string + new_len) = '\0';
	*(dest + new_len) = '\0';
	return (new_string);
}
