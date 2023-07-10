#include "main.h"
/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size : unsigned int
 * @c : char
 * Return: char, NULL if size = 0 or in case of failure
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
