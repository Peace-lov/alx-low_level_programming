#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the int  to allocate memory
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
