#include "main.h"
/**
 * _strspn - get length of a substring of s made from characters in accept
 * @s : pointer to string
 * @accept : pointer to string
 * Return: index of longest match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	char *a;

	i = 0;
	a = accept;
	while (*s != '\0' && *a != '\0')
	{
		if (*s == *a)
		{
			s++;
			a = accept;
			i++;
		}
		a++;
	}
	return (i + 1);
}
