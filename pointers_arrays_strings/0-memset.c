#include "main.h"
/**
 * _memset - fills the first n bytes of memory pointed by s with byte b
 * @s : pointer to memory string
 * @b : simple char used to fill memory
 * @n : integer n
 * Return: pointer to resulting string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
