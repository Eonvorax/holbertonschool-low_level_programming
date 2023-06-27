#include "main.h"
/**
 * _strcat - append src to dest
 * @src : pointer to source string
 * @dest : destination string for concatenated strings
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
