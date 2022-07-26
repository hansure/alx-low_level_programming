#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid: Free memory from grid
 * @grid: grid to free
 * @height: height of grid;
 * Return: nothing
 */

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
	{
	
		free(grid[i]);
	}
	free(grid);
}
