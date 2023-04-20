#include "function_pointers.h"

/**
 * int_index - function that searches for an interger
 * @array: the array
 * @size: size of array
 * @cmp: to compare
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	i = 0;
	if (array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
