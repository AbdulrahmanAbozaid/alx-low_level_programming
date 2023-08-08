#include <stdio.h>
#include "main.h"

/**
 * free_grid - gawsgws
 * @grid: gwetgsewt
 * @height: gwetewst
 *
 * Return: greygerye
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
