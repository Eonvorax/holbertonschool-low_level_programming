#include "main.h"

/**
 * open_r - opens file with reading flags and returns file descriptor
 * @filename: name of file to open
 *
 * Return: int file descriptor
*/
int open_r(char *filename)
{
    int fd;
    if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
}
/**
 * open_w - opens file with writing flags and returns file descriptor
 * @filename: name of file to open
 *
 * Return: int file descriptor
*/
int open_w(char *filename)
{
    int fd;
    if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT);
	if (fd == -1)
	{
		return (-1);
	}
}
/**
 * _cp - copies the content of a file to another file
 * @src: name of file to copy from
 * @dest: destination file to copy to
 *
 * Return: numbers of characters copied to destination
*/
int _cp(const char *src, const char *dest)
{
	ssize_t bytes_w, bytes_r;
	int fd_src, fd_dest;
	fd_src = open_r(src);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd_dest = open_w(dest);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", dest);
		exit(99);
	}

}

int main(int argc, char *argv[])
{

}