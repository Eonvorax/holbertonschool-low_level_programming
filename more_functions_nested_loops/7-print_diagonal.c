#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n : integer n
 * Return: nothing
 */
void print_diagonal(int n)
{
	int len, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len < n; len++)
		{
			for (spc = 0; spc < len; spc++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
