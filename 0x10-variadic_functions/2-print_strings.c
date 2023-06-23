#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by
 * a new line
 * @separator: the separator to separate strings
 * @n: the number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_str;
	unsigned int a;
	char *str;

	if (separator == NULL)
	{
		return;
	}
	va_start(print_str, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(print_str, char *);
		if (str == NULL)
		{
			printf("nil");
		}
		printf("%s", str);
		if (separator && a != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_str);
}
