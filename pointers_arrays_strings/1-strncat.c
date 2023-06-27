#include "main.h"
/**
 * _strncat - append src to dest, using at most n bytes from src
 * @src : pointer to source string
 * @dest : destination string for concatenated strings
 * @n : int number of bytes used
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i, byte_cnt;

	dest_len = 0;
	i = 0;
	byte_cnt = n;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0' && (byte_cnt > 0))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
		byte_cnt--;
	}
	dest[dest_len] = '\0';
	return (dest);
}
