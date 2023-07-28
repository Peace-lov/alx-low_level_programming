#include "main.h"
/**
 * _putchar - puts char
 * @c: the character to put
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
