#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase, then a newline
 * Return: void
 */
void print_alphabet_x10(void)
{
	char str[30] = "abcdefghijklmnopqrstuvwxyz";
	int i, n, count;

	n = strlen(str);
	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
