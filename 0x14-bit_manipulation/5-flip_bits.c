#include "main.h"
/**
 * write a function that returns the number of bits
 * @n: first the number
 * @m: second number to flip
 * Return: the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change = n ^ m;
	unsigned long int store_ch;
	int count;

	while (change != 0)
	{
		store_ch = change >> 1;
		if (store_ch & 1)
			count++;
	}
	return (count);
}
