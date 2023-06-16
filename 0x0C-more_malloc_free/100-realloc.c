#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc
 * and free
 * @ptr: the pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr2, *ptr_old;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	ptr_old = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr2[a] = ptr_old[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr2[a] = ptr_old[a];
	}
	free(ptr);
	return (ptr2);
}
