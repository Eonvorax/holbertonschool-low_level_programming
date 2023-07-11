#include "main.h"
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid : pointer to 2D grid to free
 * @height : height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
			{
				free(grid[i]);
			}
		}
		free(grid);
	}
}
