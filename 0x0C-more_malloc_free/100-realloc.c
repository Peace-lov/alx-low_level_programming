#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: prev size
 * @new_size: current size
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int a = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	old_p = ptr;
	if (new_size < old_size)
	{
		while (a < old_size)
		{
			p[a] = old_p[a];
			a++;
		}
	}
	free(ptr);
	return (p);
}
