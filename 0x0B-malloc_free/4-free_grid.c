#include "main.h"

/**
 *free_grid - function that frees a 2 dimensional grid
 *@grid: array value
 *@height: array value
 *
 *Return: NULL on failure
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height < 1)
	{
		return;
	}
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
