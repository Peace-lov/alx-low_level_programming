#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with specific char
 * @size: is the size of data type
 * @c: The array size
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int a = 0;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		p[a] = c;
		a++;
	}
	return (p);
}
