#include "main.h"
#include <stdlib.h>

/**
* free_grid - Add a description of the function
* @grid: get int for width
* @height: get int for height
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
