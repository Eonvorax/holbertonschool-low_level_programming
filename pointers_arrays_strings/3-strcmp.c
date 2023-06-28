#include "main.h"
/**
 * _strcmp - compare s1 with s2
 * @s1 : pointer to string 1
 * @s2 : pointer to string 2
 * Return: 0 for identical, -1 if s1 < s2, 1 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
