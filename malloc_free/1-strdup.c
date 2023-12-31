#include "main.h"
/**
 * _strdup - returns pointer to copy of given string
 * @str : pointer to given string
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
		;
	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
