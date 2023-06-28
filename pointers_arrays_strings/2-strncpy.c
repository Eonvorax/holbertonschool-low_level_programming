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
	int i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
