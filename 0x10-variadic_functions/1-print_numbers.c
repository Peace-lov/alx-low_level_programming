#include "variadic_functions.h"
/**
 * print_numbers - function that prints number, followed by a new
 * line
 * @separator: separates the numbers
 * @n: the numbers to separate
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list print_num;

	if (separator == NULL)
	{
		return;
	}

	va_start(print_num, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(print_num, int));
		if (separator && a != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(print_num);
}
