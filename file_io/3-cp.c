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
 * Return: 0 on success, non-zero value on failure
 */
int main(int argc, char **argv)
{
	int fd, fd1, cnt, res, READ_SIZE = 1024;
	char buffer[1024];
	char *r = "Error: Can't read from file %s\n", *c = "Error: Can't close fd ";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDOUT_FILENO, r, argv[1]);
		exit(98);
	}
	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cnt = read(fd, buffer, READ_SIZE);
	while (cnt > 0)
	{
		res = write(fd1, buffer, cnt);
		if (res == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		cnt = read(fd, buffer, READ_SIZE);
	}
	if (close(fd) == -1 || close(fd1) || cnt == -1)
	{
		dprintf(STDERR_FILENO, cnt == -1 ? r : c, cnt == -1 ? argv[1] : '\0');
		exit(cnt == -1 ? 98 : 100);
	}
	return (0);
}
