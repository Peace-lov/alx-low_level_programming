#include "lists.h"
/**
 * list_len - function that returns the number of element
 * in a linked list
 * @h: The pointer to list
 *
 * Return: The number of element
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}
	return (b);
}
