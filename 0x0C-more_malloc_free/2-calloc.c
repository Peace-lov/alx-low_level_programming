#include "main.h"
/**
 * _calloc - function that allocates memory for an array,
 * using malloc
 * @nmemb: number of elements
 * @size: size of array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i, b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		for (b = 0; b < nmemb; b++)
		{
			array[b] = 0;
		}
	}
	return (array);
}
