#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * parameteron each element of an array
 * @array: the array to use
 * @size: size of array
 * @action: a function pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
