#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line
 * @s: the string to print
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int z = 0;

	for (; s[z] != '\0'; z++)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
