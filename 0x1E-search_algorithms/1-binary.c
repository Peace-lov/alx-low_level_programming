#include "search_algos.h"
/**
 * binary_search - a function that searches for
 * a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element
 * @size: nuber of size of elements in array
 * @value: the value to search for
 * Return: index containing value, if not found
 * -1 or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int l, m, h;
	int y;

	if (array == NULL)
	{
		return (-1);
	}

	l = 0;
	h = size - 1;

	/* l = low, m = mid, h = high */
	while (l <= h)
	{
		m = (l + h) / 2;

		printf("Searching in array: ");
		for (y = l; y <= h; y++)
			printf("%i%s", array[y], y == h ? "\n" : ", ");

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m -1;
		else
			return (m);
	}
	return (-1);
}
