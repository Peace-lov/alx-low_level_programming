#include "search_algos.h"
#include <math.h>

size_t min(size_t b, size_t c);

/**
 * min - returns the minimum number of two size_t
 * values
 * @b: first value
 * @c: second value
 * Return: b if lower or equal to c, c otherwise
 */
size_t min(size_t b, size_t c)
{
	return (b <= c ? b: c);
}
/* compile math with `lm` using gcc */

/**
 * jump_search - a function that searches for a
 * value in a sorted array of integers using the
 * Jump search algorithm
 * @array: a pointer to the first element of array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: value, or -1 if not found or array is null
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l, h, j;

	if (!array || size == 0)
	return (-1);

	jump = sqrt(size);

	/* h = high, l = low, j = jump */
	for (h = 0, h < size && array[h] < value;
		l = h, h += j)
	{
		printf("Value checked array[%lu] = [%d]\n",
			h, array[h]);
	}

	/* cause 'found' messag when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", l, h);

	for (; l <= min(h, size - 1); l++)
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[low] == value)
			return (l);
	}
	return (-1);
}
