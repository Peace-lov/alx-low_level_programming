#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int z, a = 0;
	int *p;

	if (min > max)
		return (NULL);
	z = max - min + 1;

	p = malloc(sizeof(int) * z);
	if (!p)
		return (NULL);
	while (min <= max)
	{
		p[a] = min++;
		a++;
	}
	return (p);
}
