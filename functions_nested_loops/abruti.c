#include "main.h"
/**
 * add - adds two integers and returns the result
 * @a : integer a
 * @b : integer b
 * Return: int
 */
int add(int a, int b)
{
	int res, div;

	res = a + b;
	div = 1;
	while ((div * 10) < res)
	{
		div *= 10;
	}
	while (res != 0)
	{
		_putchar(res / div);
		res %= div;
		div /= 10;
	}
	return (a + b);
}
