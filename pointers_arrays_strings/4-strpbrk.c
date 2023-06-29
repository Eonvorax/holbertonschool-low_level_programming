#include "main.h"
/**
 * _strpbrk - search string for first occurence of any char of accept set
 * @s : pointer to string searched
 * @accept : pointer to set of chars to search
 * Return: pointer to first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
