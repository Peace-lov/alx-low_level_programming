#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Function that prints a struct dog
 * @d: the pointer to struct dog
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Name: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
