#include "main.h"
/**
 * print_array - prints n elements if an int array
 * @a : pointer to int array
 * @n : integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (((i + 1) != n))
			printf(", ");
	}
	printf("\n");
}
