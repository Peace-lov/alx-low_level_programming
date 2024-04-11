#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted
 * array of integers
 * @array: the pointer to the first element of array
 * @size:the number to the elements in array
 * @value: the value to search
 * Return: value which is the first index content, or -1
 * if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	size_t position;

	if (!array)
		return (-1);

	while ((array[h] != array[l]) &&
		(value >= array[l]) && (value <= array[h]))
	{
		position = l + (((double)(h - l) / (array[h] - array[l]))
				* (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", position,
			array[position]);
		if (array[position] < value)
			l = position + 1;
		else if (value < array[position])
			h = position - 1;
		else
			return (position);
	}
	if (value == array[l])
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		return (l);
	}
	position = l + (((double)(h - l) / (array[h] - array[l]))
			* (value - array[l]));
	printf("Value checked array[%lu] is out of range\n", position);
	return (-1);
}
