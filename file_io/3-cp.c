#include "main.h"

/**
 * open_r - opens file with reading flags and returns file descriptor
 * @filename: name of file to open
 *
 * Return: int file descriptor
*/
int open_r(const char *filename)
{
    int fd;
    if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}
/**
 * open_w - opens file with writing flags and returns file descriptor
 * @filename: name of file to open
 *
 * Return: int file descriptor
*/
int open_w(const char *filename)
{
    int fd;
    if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 00644);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * close_fd - closes a file using a file descriptor and handles errors
 * @fd: file descriptor
 *
 * Return: nothing
*/
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * _cp - copies the content of a file to another file
 * @src: name of file to copy from
 * @dest: destination file to copy to
 *
 * Return: 0
*/
void _cp(const char *src, const char *dest)
{
	char buffer[1024];
	ssize_t bytes_w, bytes_r;
	int fd_src, fd_dest;
	fd_src = open_r(src);
	fd_dest = open_w(dest);

	bytes_r = read(fd_src, buffer, sizeof(buffer));
	while (bytes_r > 0)
	{
		bytes_w = write(fd_dest, buffer, bytes_r);
		if (bytes_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
		bytes_r = read(fd_src, buffer, sizeof(buffer));
	}
	if (bytes_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	close_fd(fd_src);
	close_fd(fd_dest);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}
