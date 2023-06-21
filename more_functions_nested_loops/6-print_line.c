#include "main.h"
/**
 * print_line - prints a line
 * @n : integer c
 * Return: nothing
 */
void print_line(int n)
{
	int len;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		len = 0;
		for (len = 0; len <= n; len++)
		{
			_putchar('_');
			len++;
		}
		_putchar('\n');
	}
}
