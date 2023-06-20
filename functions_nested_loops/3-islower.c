#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - returns 1 if c is lowercase, 0 otherwise.
 * @c : integer c
 * Return: void
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
