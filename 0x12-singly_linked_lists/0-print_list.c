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
	size_t a = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}
