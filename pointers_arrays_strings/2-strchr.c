/**
 * _strchar - locates a character in a string
 * @s: string to be examined
 * @c: character to be located
 *
 * Return: pointer to the 1st occurence of char c in str s / NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			break;
		}
	}
	return (s);
}
