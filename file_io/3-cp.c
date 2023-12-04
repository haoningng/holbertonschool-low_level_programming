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
	char *buffer;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 3000);
	fd1 = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	cnt = read(fd, buffer, READ_SIZE);
	while (cnt > 0)
	{
		res = write(fd1, buffer, cnt);
		if (res != cnt)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		cnt = read(fd, buffer, READ_SIZE);
	}
	if (cnt < -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file test_folder/textfile_0\n");
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	close(fd1);
	free(buffer);
	return (0);
}
