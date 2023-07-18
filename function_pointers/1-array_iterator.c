#include "function_pointers.h"
/**
 * array_iterator - runs given function on each int of an array
 * @array: pointer to array of integers
 * @size: size of array
 * @action: pointer to function ran on array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL && array != NULL)
	{
		for (; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
