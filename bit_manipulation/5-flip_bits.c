#include "main.h"

/**
 * flip_bits - returns the number of different bits between n and m
 * @n: given number
 * @m: given number
 *
 * Return: amount of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		diff &= (diff - 1);
		count++;
	}
	return (count);
}
