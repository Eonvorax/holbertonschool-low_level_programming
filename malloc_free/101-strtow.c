#include "main.h"
/**
 * strtow - splits a string into words, separated by spaces
 * @str : pointer to string
 * Return: char ** (array of strings)
 */
char **strtow(char *str)
{
	unsigned int str_i;
	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	for (str_i = 0; s
