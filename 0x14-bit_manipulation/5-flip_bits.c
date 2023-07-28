#include "main.h"
/**
 * flip_bits - write a function that returns the number of bits
 * @n: first the number
 * @m: second number to flip
 * Return: the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change = n ^ m;
	unsigned long int store_ch;
	int count = 0, a = 63;

	for (; a >= 0; a--)
	{
		store_ch = change >> a;
		if (store_ch & 1)
			count++;
	}
	return (count);
}
