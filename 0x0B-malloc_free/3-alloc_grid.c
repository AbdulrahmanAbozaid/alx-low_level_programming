#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - gfdgdsfg
 * @width: gegw
 * @height: gdsgsd
 *
 * Return: herhesrhg
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(*grid));

	if (grid == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
