#include "main.h"
/**
 * reverse_array - reverse array of n integers
 * @a : pointer to int a
 * @n : integer number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int swp = 0;

	for (; i <= (n / 2); i++)
	{
		swp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swp;
	}
}
