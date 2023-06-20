#include "main.h"
/**
 * print_last_digit - returns last digit of a number
 * @n : integer n
 * Return: an int from 0 to 9
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((n * -1) % 10) + '0');
		return ((n * -1) % 10);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
