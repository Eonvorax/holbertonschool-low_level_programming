#include "main.h"
#include <limits.h>
/**
 * string_toupper - changes all lowercase in string to uppercase
 * @s : pointer to string
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = (s[i] - 32);
	return (s);
}
