#include "main.h"
/**
 * _strchr - returns pointer to 1st occurence of given char in string
 * @s : pointer to string
 * @c : char to search
 * Return: char *
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = s;
	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	if (*p == c)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}
