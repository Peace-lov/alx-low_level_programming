#include "main.h"
/**
 * _puts - Prints a string
 * @str: Is the string
 *
 * Return: str
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
