#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Function that prints anything
 * @format: arrangement of things
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	char *s;
	char *op = "";
	int k = 0;

	va_start(anything, format);
	if (format)
	{
		if (format[k])
		{
			switch (format[k])
			{
				case "c":
					printf("%s%d", op, va_arg(anything, int));
					break;
				case "i":
					printf("%s%i", op, va_arg(anything, int));
					break;
				case "f":
					printf("%s%f", op, va_arg(anything, float));
					break;
				case "s":
					s = va_arg(anything, char);
					if (s == NULL)
						printf("nil");
					printf("%s%s", op, va_arg(anything, char));
					break;
				default:
					k++;
					continue;
			}
			op = ",";
			k++;
		}
	}
	printf("\n");

	va_end(anything);
}
