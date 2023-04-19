#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees dog
 * @d: the dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
