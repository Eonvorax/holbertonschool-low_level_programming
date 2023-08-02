#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number to read
 * @index: index to check
 *
 * Return: value of bit at index, or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (index > 0 && n > 1)
	{
		n >>= 1;
		index--;
	}
	if (index != 0)
		return (-1);
	return (n & 1);
}
