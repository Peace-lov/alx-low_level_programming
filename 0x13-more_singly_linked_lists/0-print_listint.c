#include "lists.h"
/**
 * print_listint - function that prints all elements
 * @h: The pointer to the lists
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t print = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		print++;
		h = h->next;
	}
	return (print);
}
