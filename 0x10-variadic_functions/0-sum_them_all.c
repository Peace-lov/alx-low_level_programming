#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all
 * parameters
 * @n: the list of numbers
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int k;

	int sum = 0;
	va_start(nums, n);

	for (k = 0; k < n; k++)
	{
		sum += va_arg(nums, int);

		if (n == 0)
			return (0);
	}
	va_end(nums);
	return (sum);
}
