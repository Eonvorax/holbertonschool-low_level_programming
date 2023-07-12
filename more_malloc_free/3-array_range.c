#include "main.h"
/**
 * array_range - creates array of integers from min to max
 * @min : int minimum integer
 * @max : int maximum integer
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int *a = NULL;
	int i, n;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	n = min;
	for (i = 0; i < (max - min + 1); i++)
	{
		a[i] = n;
		n++;
	}
	return (a);
}
