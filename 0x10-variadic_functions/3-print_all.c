#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of numbers
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	char *str;
	unsigned int k = 0, c, i;
	float f;
	char *opera = "";

	va_start(anything, format);
	while (format[k])
	{
		if (format[k])
		{
			switch (format[k])
			{
				case 'c':
					c = (char)va_arg(anything, int);
					printf("%s%c", opera, c);
					break;
				case 'i':
					i = va_arg(anything, int);
					printf("%s%i", opera, i);
					break;
				case 'f':
					f = (float)va_arg(anything, double);
					printf("%s%f", opera, f);
					break;
				case 's':
					str = va_arg(anything, char *);
					if (str == NULL)
					{
						printf("nil");
					}
					printf("%s%s", opera, str);
					break;
				default:
					k++;
					continue;
			}
			opera = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(anything);
}
