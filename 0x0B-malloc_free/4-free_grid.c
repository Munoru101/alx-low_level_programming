#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that free 2-D grid created by alloc_grid
 * @grid: integer pointer to the grid
 * @height: integer argument
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
