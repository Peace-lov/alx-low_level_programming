#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to a functio
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != '\0')
			return (a);
	}
	return (-1);
}
