#include "main.h"
/**
 * get_bit - Write a function that returns the value
 * of a bit at a given index.
 * @n: the number to return
 * @index: the index starting from 0
 * Return: the number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (val = (n >> index) & 1);
}
