#include "main.h"

/**
 * rev_string - reverse a string
 * @s: is the string
 * Return: 0
 */
void rev_string(char *s)
{
	int b = 0;

	while (s[b] != '\0')
		--b;
	{
		_putchar
