#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c : integer c
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
