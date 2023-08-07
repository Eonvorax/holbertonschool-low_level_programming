#include "main.h"

/**
 * create_file - create new file and writes given content inside
 * @filename: name of file to create
 * @text_content: content to write inside file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t bytes_w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1) /* fd */
	{
		return (-1);
	}
	while (text_content != NULL && text_content[len] != '\0')
		len++;
	bytes_w = write(fd, text_content, len);
	if (bytes_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
