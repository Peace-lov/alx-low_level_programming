#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * initializes it with a specific char
 * @size: size of array
 * @c: the character
 * Return: Pointer to the array on success
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int j;

	pointer = malloc(size * sizeof(char));

	if (size == 0 || pointer == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		pointer[j] = c;
	}
	return (pointer);
}
