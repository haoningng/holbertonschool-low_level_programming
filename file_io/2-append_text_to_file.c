#include <fcntl.h>
#include <stddef.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add to the end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cnt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
