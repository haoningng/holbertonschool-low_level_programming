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
	while (*src)
	{
		*new_string = *src;
		new_string++;
		src++;
	}
	*(new_string + new_len) = '\0';
	strcpy(dest, new_string);
	return (new_string);
}
