#include "main.h"
/**
 * set_bit - write a function that sets the value of a
 * bit to 1 at a given index
 * @n: the number set
 * @index: the index to set
 * Return: the number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int sets = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | sets);

	return (1);
}
