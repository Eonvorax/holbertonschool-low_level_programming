#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, then a newline
 * Return: void
 */
void print_alphabet(void)
{
	char str[30] = "abcdefghijklmnopqrstuvwxyz";
	int i, n;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
