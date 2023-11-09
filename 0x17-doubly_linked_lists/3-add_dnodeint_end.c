#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: head of node
 * @n: number of nodes
 * Return: a pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));

	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = nw;
	}
	else
	{
		*head = nw;
	}
	nw->prev = hd;
	return (nw);
}
