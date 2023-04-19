#include <string.h>
#include <stddef.h>
#include "dog.h"
/**
 * new_dog - Define a new type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 */
typedef dog_t
{
	char *name;
	float age;
	char *owner;
} new_dog;

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t c;

	if (c == Null)
		return (Null);
	strcpy(c.name, "Poppy");
	strcpy(c.owner, "Bob");
}
