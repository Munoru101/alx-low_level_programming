#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D array of ints
 * @grid: pointer to the 2D array
 * @height: of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
