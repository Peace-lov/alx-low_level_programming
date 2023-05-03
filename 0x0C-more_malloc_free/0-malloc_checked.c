#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of byte
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	while (p == NULL)
	{
		exit(98);
	}
	return (p);
}
