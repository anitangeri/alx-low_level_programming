#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Entry point
  * @grid:rows of matrix
  * @height:column of string
  * Return:null
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
