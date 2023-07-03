#include "main.h"
/**
 * is_prime_rec - recursively returns checks if n is prime
 * @n: int number to check for prime
 * @i: int number decremented
 * Return: int
 */
int is_prime_rec(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_rec(n, i - 1));
}
/**
 * is_prime_number - returns 1 if n prime, 0 if not
 * @n : given int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_rec(n, n - 1));
}
