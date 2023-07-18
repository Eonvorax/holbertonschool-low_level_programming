#include "function_pointers.h"
/**
 * int_index - runs given function on array to search for an int
 * @array: array of int
 * @size: int size of array
 * @cmp: pointer to given function that compares values
 * Return: int value, -1 if no match, else index of 1st int found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL || size == 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
