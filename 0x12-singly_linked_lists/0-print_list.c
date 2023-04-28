#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Function that prints all elements
 * of a list.
 * @h: The pointer
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *list = h;
	size_t a = 0;

	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", list->len, list->str);
		}
		a++;
		list = list->next;
	}
	return (a);
}
