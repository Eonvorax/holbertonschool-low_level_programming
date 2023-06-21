#include "main.h"
/**
 * more_numbers - prints ten times the numbers from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar('1');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
