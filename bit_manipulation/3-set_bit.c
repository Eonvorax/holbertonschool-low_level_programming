#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: given number
 * @index: index where bit will be set to 1
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask <<= index;
	*n |= mask;
	return (1);
}
