#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: seperates the numbers
 * @n: list of numbers
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_nums;
	unsigned int k = 0;

	va_start(list_nums, n);
	while (k < n)
	{
		printf("%d", va_arg(list_nums, int));
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
		k++;
	}
	printf("\n");

	va_end(list_nums);
}
