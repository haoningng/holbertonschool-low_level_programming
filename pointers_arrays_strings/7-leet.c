/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: string after being encoded
 */
char *leet(char *str)
{
	int i;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'4', '3', '0', '7', '1'};

	while (*str)
	{
		
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == (a[i] - 32))
			{
				*str = b[i];
			}
		}
		str++;
	}
	return (str);
}
