#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: command arguments
 *
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int fd, fd1, cnt, res;
	char *buffer;

	if (argc != 3)
	{
		write(STDOUT_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1686);
	if (buffer == NULL)
		return (98);
	cnt = read(fd, buffer,1686);
	if (cnt < 0)
	{
		dprintf(2, "Error1: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	res = write(fd1, buffer, cnt);
	if (res != cnt)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	res = close(fd);
	if (res == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (1);
}
