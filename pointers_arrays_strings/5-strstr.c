#include "main.h"
/**
 * _strstr - search string for first occurence of substring
 * @haystack : pointer to string searched
 * @needle : pointer to substring
 * Return: pointer to first match
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while ((needle[i] != '\0') && (haystack[i] == needle[i]))
		{
			i++;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
