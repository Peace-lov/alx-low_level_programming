#include "lists.h"
/**
 * get_dnodeint_at_index - get the index nodes
 * @head: head of node
 * @index: index of each node
 *
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sz;
	dlistint_t *tp;

	sz = 0;

	if (head == NULL)
		return (NULL);

	tp = head;

	while (tp)
	{
		if (index == sz)
			return (tp);
		sz++;
		tp = tp->next;
	}
	return (NULL);
}
