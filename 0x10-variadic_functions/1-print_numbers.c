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
	va_list print_num;
	unsigned int a, b;

	va_start(print_num, n);

	if (separator == NULL)
		return;
	for (a = 0; a < n; a++)
	{
		b = va_arg(print_num, int);
		if (b != (n - 1))
		{
			printf("%d ", b);
			if (separator && a < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(print_num);
}
