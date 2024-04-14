#include "search_algos.h"
/**
 * linear_search - searches for a value in array
 * using search algos
 * @size: size of array
 * @array: input array
 * @value: the value to earch in
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (array == NULL)
	{
		return (-1);
	}
	for (y = 0; y < size; y++)
	{
		printf("Value checked
		array[%li] = [%i]\n", y, array[y]);
		if (array[y] == value)
		{
			return (y);
		}
	}
	return (-1);
}
