#include "main.h"

/**
 ***alloc_grid -  returns a pointer to a 2 dimensional arrays
 *@width: array value
 *@height: array value
 *
 *Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (--i; i >= 0; i--)
			{
				free(grid[i]);
				free(grid);
				return (NULL);
			}
		}
	}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		return (grid);
}
