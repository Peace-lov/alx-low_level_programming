#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: Is the name
 * @f: the function pointer
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	while (name == NULL || f == NULL)
		return;

	f(name);

}
