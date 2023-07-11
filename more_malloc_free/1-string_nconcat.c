#include "main.h"
/**
 * ncat_size - returns size for concatenated s1 and s2
 * up to n bytes of s2
 * @s1 : string 1
 * @s2 : string 2
 * @n : unsigned int max bytes concatenated of s2
 * Return: unsigned int size
 */
unsigned int ncat_size(char *s1, char *s2, unsigned int n)
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
	if (s2 == NULL || n == 0)
	{
		i = 0;
	}
	else
	{
		for (i = 0; (s2[i] != '\0') && (i < n); i++)
			;
	}
	size += i;
	return (size + 1);
}
/**
 * string_nconcat - concatenates two strings and returns new allocated space
 * @s1 : string 1
 * @s2 : string 2
 * @n : number of bytes from s2 to concatenate
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size, i_src, i_dest;

	size = ncat_size(s1, s2, n);
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
		while (s2[i_src] != '\0' && i_src < n)
		{
			str[i_dest] = s2[i_src];
			i_src++;
			i_dest++;
		}
		str[i_dest] = '\0';
	}
	return (str);
}
