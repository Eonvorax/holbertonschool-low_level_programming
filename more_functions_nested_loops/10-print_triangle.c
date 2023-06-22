#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer size
 * Return: nothing
 */
void print_triangle(int size)
{
	int len, spc;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len < size; len++)
		{
			for (spc = 0; spc < size; spc++)
			{
				if (spc < (size - len - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
