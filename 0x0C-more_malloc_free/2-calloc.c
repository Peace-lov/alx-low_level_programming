#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @str: memory
 * @c: character to copy
 * @n: number of times to copy c
 * Return: pointer to memory
 */
char *_memset(char *str, char c, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		str[z] = c;
		z++;
	}
	return (str);
}
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

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	_memset(array, 0, nmemb * size);
	return (array);
}
