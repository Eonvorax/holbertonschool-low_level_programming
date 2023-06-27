#include "main.h"
/**
 * _strcat - append src to dest
 * @src : pointer to source string
 * @dest : destination string for concatenated strings
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	i = 0;
	while ((dest[i] != '\0'))
	{
		i++;
	}
	n = i;
	i = 0;
	while ((i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
