#include "main.h"
/**
 * total_size - returns total size for concatenated string
 * @s1 : string 1
 * @s2 : string 2
 * Return: unsigned int size
 */
unsigned int total_size(char *s1, char *s2)
{
	unsigned int size, i;

	size = 0;
	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	size += i;
	if (s2 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			;
	}
	size += i;
	return (size + 1);
}
/**
 * str_concat - concatenates two strings and returns new allocated space
 * @s1 : string 1
 * @s2 : string 2
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size, i_src, i_dest;

	size = total_size(s1, s2);
	str = malloc(sizeof(char) * (size));
	if (str == NULL)
	{
		return (NULL);
	}
	i_dest = 0;
	i_src = 0;
	if (s1 != NULL)
	{
		while (s1[i_src] != '\0')
		{
			str[i_src] = s1[i_src];
			i_src++;
		}
	}
	i_dest += i_src;
	i_src = 0;
	if (s2 != NULL)
	{
		while (s2[i_src] != '\0')
		{
			str[i_dest] = s2[i_src];
			i_src++;
			i_dest++;
		}
		str[i_dest] = '\0';
	}
	return (str);
}
