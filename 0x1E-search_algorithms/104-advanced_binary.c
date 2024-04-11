#include "search_algos.h"

int binary_search_recursion(int *array, int value,
				size_t l, size_t h);
/**
 * binary_search_recursion - helper to advanced_binary,
 * @array: a pointer to the first element of array
 * @value: the value to search
 * @l: starting index in array
 * @h: ending index in array
 * Return: value, or -1 if not found
 */
int binary_search_recursion(int *array, int value,
			size_t l, size_t h)
{
	size_t m, z;

	if (!array)
		return (-1);

	m = (l + h) / 2;
	printf("Searching in array: ");
	for (z = l; z <= h; z++)
		printf("%i%s", array[z], z == h ? "\n" :
				", ");

	if (array[l] == value)
		return ((int)l);

	if (array[l] != array[h])
	{
		if (array[m] < value)
			return (binary_search_recursion(array,
					value, mid + 1, h));
		if (array[m] >= value)
			return (binary_search_recursion(array,
					value, l, m));
	}
	return (-1)
}

/**
 * advanced_binary - searches for a value in a sorted array
 * @array: the pointer to first element of array
 * @size: the number of elements in array
 * @value: the value to search
 * Return: value or -1 if value is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, l, h));
}
