#include "main.h"

/**
 * _strlen - A function
 * @s: string
 * Return: (leng).
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return (leng);
}
