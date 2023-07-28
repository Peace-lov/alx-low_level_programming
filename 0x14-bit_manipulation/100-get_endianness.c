#include "main.h"
/**
 * get_endianness - Write a function that checks the endianness.
 *
 * Return: nothing
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
