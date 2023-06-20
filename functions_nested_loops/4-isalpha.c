#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - returns 1 if c is a letter, 0 otherwise.
 * @c : integer c
 * Return: void
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
