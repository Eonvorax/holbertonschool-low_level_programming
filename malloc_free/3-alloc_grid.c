#include "main.h"
/**
 * alloc_grid - returns pointer to 2D int array
 * @width : int width of array
 * @height : int height of array
 * Return: int ** pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int l, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mat = malloc(sizeof(*mat) * height);
	if (mat == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < height; l++)
	{
		mat[l] = malloc(sizeof(int) * width);
		if (mat[l] == NULL)
		{
			while (l--)
				free(mat[l]);
			free(mat);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (c = 0; c < width; c++)
		{
			mat[l][c] = 0;
		}
	}
	return (mat);
}
