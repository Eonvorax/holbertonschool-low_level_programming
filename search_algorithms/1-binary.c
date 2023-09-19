#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_sub_array - Prints a sub-array of integers
 *
 * @array: The array to be printed
 * @left: starting index
 * @right: ending index
 *
 * Return: nothing
 */
void print_sub_array(const int *array, size_t left, size_t right)
{
	size_t i = left;

	printf("Searching in array: ");
	while (array && i <= right)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: given sorted array of integers
 * @value: int value to search for in array
 * @size: size of the array
 *
 * Return: index of found value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_sub_array(array, left, right);
		i = (left + right) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}
	return (-1);
}
