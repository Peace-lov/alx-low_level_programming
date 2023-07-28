#include "main.h"
/**
 * binary_to_uint - Write a function that converts a
 * binary number to an unsigned int.
 * @b: the binary number
 * Return: the number or 0 if there is more char
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int val = 0;

	if (!b)
		return (0);
	while (b[a] != '\0')
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		val = 2 * val + (b[a] - '0');
		a++;
	}
	return (val);
}
