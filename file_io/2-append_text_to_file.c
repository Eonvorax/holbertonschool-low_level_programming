#include "main.h"
/**
 * append_text_to_file - appends text to end of given file
 * @filename: name of the file to append text to
 * @text_content: text content to append to end of file
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t bytes_w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
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
