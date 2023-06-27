#include "main.h"
/**
 * _strcpy - copies string pointed to by src to dest
 * @src : pointer to source string
 * @dest : destination buffer for copied string
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
