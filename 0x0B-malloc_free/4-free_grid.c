#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid called in the function
 * @grid: the grid called
 * @height: grid height
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
