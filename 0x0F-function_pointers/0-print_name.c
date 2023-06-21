#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: Name of array
 * @f: function pointer
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
