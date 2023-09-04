#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -function
 * @grid: parameter
 * @height: parameter
 * Return:(0)always
 */

void free_grid(int **grid, int height)
{
	int q;

	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}
	free(grid);
}
