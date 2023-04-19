#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - prints length og string
 * @s: the string
 *
 * Return: (length)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _strcpy - Function that copies the string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int z = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for (; z < c; z++)
	{
		dest[z] = src[z];
	}
	dest[c] = '\0';
	return (dest);
}

/**
 * new_dog - Define a new type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *C;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	C = malloc(sizeof(dog_t));
	if (C == NULL)
		return (NULL);
	C->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (C == NULL)
	{
		free(C);
		return (NULL);
	}

	C->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if (C == NULL)
	{
		free(C->name);
		free(C);
		return (NULL);
	}
	C->name = _strcpy(C->name, name);
	C->age = age;
	C->owner = _strcpy(C->owner, owner);

	return (C);
}
