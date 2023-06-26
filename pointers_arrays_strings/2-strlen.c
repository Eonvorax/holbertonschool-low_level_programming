#include "main.h"
/**
 * _strlen - returns length of string from pointer
 * @s : pointer to string
 * Return: int
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while ((*s != '\0'))
	{
		length++;
		s++;
	}
	return (length);
}
