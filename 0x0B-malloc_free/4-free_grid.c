#include <stdlib.h>

/**
 * free_grid - free memory alloctaed to a 2D array created previously
 * @height: height of the 2D array
 * @grid: 2D array to free memory from
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
