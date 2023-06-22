#include "main.h"
/**
 * print_square - prints a square of a given size
 * @size : integer size
 * Return: nothing
 */
void print_square(int size)
{
	int l, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
