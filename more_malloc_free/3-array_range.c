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
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[i] = i;
	}
	return (a);
}
