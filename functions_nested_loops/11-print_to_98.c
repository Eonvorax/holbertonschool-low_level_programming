#include "main.h"
/**
 * print_to_98 - prints the count from n to 98
 * @n : integer n
 * Return: nothing
 */
void print_to_98(int n)
{
	int res, div, inc, cnt;

	if (n > 98)
	{
		inc = -1;
	}
	else if (n < 98)
	{
		inc = 1;
	}
	cnt = n;
	while (cnt != 98)
	{
		res = cnt;
		div = 1;
		while ((div * 10) < res)
		{
			div *= 10;
		}
		if (res == 0)
		{
			_putchar('0');
		}
		while (res != 0)
		{
			_putchar((res / div) + '0');
			res %= div;
			div /= 10;
		}
		_putchar(',');
		_putchar(' ');
		cnt = cnt + inc;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
