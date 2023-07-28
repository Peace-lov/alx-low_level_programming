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

	for (; change > 0; change >>= 1)
	{
		store_ch += (change & 1);
	}
	return (store_ch);
}
