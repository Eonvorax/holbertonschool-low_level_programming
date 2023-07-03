#include "main.h"
/**
 * helper - looks for sqrt with the input number from n to comp
 * @i:  int number squared and compared against comp
 * @comp: int number to compare with
 * Return: natural sqrt of number comp
 */
int helper(int i, int comp)
{
	if (i * i == comp)
	{
		return (i);
	}
	if (i * i > comp)
	{
		return (-1);
	}
	return (helper(i + 1, comp));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n : given int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
