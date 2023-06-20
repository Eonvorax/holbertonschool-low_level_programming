#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int l, c, n;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c < 10; c++)
		{
			n = l * c;
			if (c != 0)
			{
				_putchar(' ');
			}
			if (n < 10)
			{
				if (c != 0)
				{
					_putchar(' ');
				}
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (c != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
