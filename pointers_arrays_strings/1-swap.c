#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a : pointer to int a
 * @b : pointer to int b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
