/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the destination memory area
 * @src: the source memory area to be copied from
 * @n: the number of bytes from memory area to be copied
 *
 * Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *new_str = dest;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	return (new_str);
}
