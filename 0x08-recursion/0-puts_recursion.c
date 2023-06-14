#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a newline
 * @s: the string pointer
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	putchar ('\n');
}
