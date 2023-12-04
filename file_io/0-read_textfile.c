#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * read_text - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cnt;
	ssize_t sz;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	cnt = read(fd, buffer, letters);
	if (cnt < 0)
	{
		free(buffer);
		close(fd);
		return(0);
	}
	buffer[cnt] = '\0';
	sz = write(STDOUT_FILENO, buffer, cnt);
	if (sz < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (sz);
}
