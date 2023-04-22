#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: that separates the numbers
 * @n: list of numbers
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int k = 0;

	va_start(strings, n);
	while (k < n)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
		k++;
	}
	printf("\n");

	va_end(strings);
}
