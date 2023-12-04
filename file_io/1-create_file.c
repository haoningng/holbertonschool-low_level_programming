#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a text file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, cnt;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, O_RDWR);
	if (fd < 0)
		return (-1);
	fchmod(fd, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		cnt = write(fd, text_content, strlen(text_content));
		if (cnt < 0)
			return (-1);
	}
	else
	{
		cnt = write(fd, "", 0);
		if (cnt < 0)
			return (-1);
	}
	return (1);
}
