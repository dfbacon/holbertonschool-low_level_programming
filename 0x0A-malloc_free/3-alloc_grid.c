#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - create a 2-D grid of integers
 * @width: gird width
 * @height: grid height
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k, l;

	if (width <= 0)
		return (NULL);
	else if (height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	j = 0;
	while (j < height)
	{
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
		j++;
	}
	return (grid);
}
