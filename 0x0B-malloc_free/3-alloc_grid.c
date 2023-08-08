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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}

	return (grid);
}
