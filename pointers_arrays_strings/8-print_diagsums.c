#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a : pointer to a 1D int array representing a 2D square matrix
 * @size : int size of original matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int diag, res;

	res = 0;
	for (diag = 0; diag < size; diag++)
	{
		res += *(a + (diag * size) + diag);
	}
	printf("%d, ", res);
	res = 0;
	for (diag = 0; diag < size; diag++)
	{
		res += *(a + (diag * size) + (size - 1 - diag));
	}
	printf("%d\n", res);
}
