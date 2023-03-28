#include "main.h"

/**
 * _puts - Prints a string
 * @str: is the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
