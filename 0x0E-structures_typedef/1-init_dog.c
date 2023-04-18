#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Function that initialize a variable
 * of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: the pointer to struct dog
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
