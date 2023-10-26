/**
 * _memset - fills the first n bytes of memory with a constant byte b
 * @s: the pointer to the memory area
 * @b: the constant byte
 * @n: the first number of bytes of memory to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *new_s = s;
	
	i = 0;
	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (new_s);
}
