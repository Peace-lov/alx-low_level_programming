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
	int k;
	char *opera = "";

	va_start(anything, format);
	if (format)
	{
		if (format[k])
		{
			switch(format[k])
			{
				case "c":
					printf("%s%d\n", opera, va_arg(anything, int));
					break;
				case "i":
					printf("%s%i", opera, va_arg(anything, int));
					break;
				case "f":
					printf("%s%f", opera, va_arg(anything, double));
					break;
				case "s":
					str = va_arg(anything, char *);
					if (str == NULL)
					{
						printf("(nil)");
					}
					printf("%s%s", opera, va_arg(anything, char*));
					break;
				default:
					k++;
					continue;
			}
			opera = ",";
			k++;
		}
	}
	printf("\n");
	va_end(anything);
}
