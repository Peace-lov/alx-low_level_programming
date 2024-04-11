#include "search_algos.h"

int binary_search_helper(int *array, int value,
			size_t l, size_t h);
size_t min(size_t b, size_t c);

/**
 * min - returns the minimum of two size_t values
 * @b: first value
 * @c: second value
 * Return: b if lower or equal to c, c otherwise
 */
size_t min(size_t b, size_t c)
{
	return (b <= c ? b : c);
}

/**
 * binary_search_helper - seaches for a value using
 * binary serach algos.
 * @array: the pointer to the first element of array
 * @value: the value to search
 * @l: starting index
 * @h: ending index
 * Return: value, or -1 if value is not found or array
 * null
 */
int binary_search_helper(int *array, int value, size_t l,
					size_t h)
{
	size_t m, z;

	if (!array)
		return (-1);

	while (l <= h)
	{
		m = (l + h) / 2;
		printf("Searching in array: ");
		for (z = l; z <= h; z++)
			printf("%i%s", array[z], z == h ? "\n"
						: ", ");
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return ((int)m);
	}
	return (-1);
}

/**
 * exponential_search - searches for value in a sorted array
 * @array: the pointer to the first element of array
 * @size: the number of the element in the array
 * @value: the value to search
 * Return: value, or -1 if value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l, h, bo = 1;

	if (!array || size == 0)
		return (-1);

	while (bo < size && array[bo] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			bo, array[bo]);
		bo *= 2;
	}

	l = bo / 2;
	h = min(bo, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n",
						l, h);
	return (binary_search_helper(array, value, l, h));
}
