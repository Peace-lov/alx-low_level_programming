#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @b: is the last digit of the number
 * Return: the valueof the last digit
 */
int print_last_digit(int b)
{
	int a;

	if (b < 0)
	b = -b;
	a = b % 10;
	if (a < 0)
	a = -a;
_putchar(a + '0');
return (a);
}
