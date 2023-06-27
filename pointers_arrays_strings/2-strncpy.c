#include "main.h"
/**
 * _strncpy - copies string src to dest, using n bytes max
 * @src : pointer to source string
 * @dest : destination buffer for copied string
 * @n : int number of bytes used
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, byte_cnt;

	i = 0;
	byte_cnt = n;
	while ((src[i] != '\0') && (byte_cnt > 0))
	{
		dest[i] = src[i];
		i++;
		byte_cnt--;
	}
	if (dest[i] != '\0' && src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
