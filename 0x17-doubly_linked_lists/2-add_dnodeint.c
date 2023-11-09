#include "lists.h"
/**
 * add_dnodeint - adds nodes
 * @head: head of the node
 * @n: number of nodes
 *
 * Return: pointer to the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *hd;

	nw = malloc(sizeof(dlistint_t));

	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->pre = NULL;
	hd = *head;

	if (hd != NULL)
	{
		while (hd->prev != NULL)
			hd = hd->prev;
	}
	nw->next = hd;

	if (hd != NULL)
		hd->prev = nw;
	*head = nw;

	return (nw);
}
