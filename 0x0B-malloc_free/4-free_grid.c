#include "main.h"
/**
 * free_grid - function that frees a two dimensional grid
 * previously created
 * @grid: grid pointer to free
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
