#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: ssize_t number of letters actually read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_w, bytes_r;
	int fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_r = read(fd, buffer, letters);

	if (bytes_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	free(buffer);
	close(fd);
	return (bytes_w);
}
