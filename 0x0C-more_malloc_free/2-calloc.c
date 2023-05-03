#include "main.h"
/**
 * _calloset - that fills memory with a constant byte
 * @y: memory area to be filled
 * @z: char to copy
 * @n: number of times to copy z
 *
 * Return: pointer
 */
char *_calloset(char *y, char z, unsigned int n)
{
	unsigned int b = 0;

	while (b < n)
	{
		y[b] = z;
		b++;
	}
	return (y);
}
/**
 * _calloc - function that allocates memory for an array,
 * using malloc
 * @nmemb: member
 * @size: size of byte
 *
 * Return: pointer, NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(size * nmemb);

	if (!p)
	{
		return (NULL);
	}
	_calloset(p, 0, nmemb * size);
	return (p);
}
