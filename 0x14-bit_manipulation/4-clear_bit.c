#include "main.h"
/**
 * clear_bit - write a function that sets the value of
 * a bit to 0 at a given index
 * @n: the number to set
 * @index: the index to set
 * Return: the number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int sets = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & sets);

	return (1);
}
