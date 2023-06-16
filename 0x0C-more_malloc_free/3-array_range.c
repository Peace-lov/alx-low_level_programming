#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum number of integer
 * @max: maximum num of integer
 * Return: a pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *array;
	int i, b;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	array = malloc(sizeof(int) * b);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}
	return (array);
}
