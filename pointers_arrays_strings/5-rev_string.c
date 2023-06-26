#include "main.h"
/**
 * rev_string - reverses a given string
 * @s : pointer to string
 * Return: nothing
 */
void rev_string(char *s)
{
	char *end, *beg;
	char tmp;

	end = s;
	beg = s;
	while ((*end != '\0'))
	{
		end++;
	}
	end--;
	while (end > beg)
	{
		tmp = *beg;
		*beg = *end;
		*end = tmp;
		beg++;
		end--;
	}
}
