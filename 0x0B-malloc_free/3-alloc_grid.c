#include "main.h"
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	alloc = malloc(height * sizeof(int *));

	if (alloc == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		alloc[a] = malloc(width * sizeof(int *));
		if (alloc[a] == NULL)
		{
			for (; a >= 0; a--)
				free(alloc[a]);
			free(alloc);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b <= width; b++)
			alloc[a][b] = 0;
	}
	return (alloc);
}
