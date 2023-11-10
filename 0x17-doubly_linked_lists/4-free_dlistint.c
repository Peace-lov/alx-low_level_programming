#include "lists.h"
/**
 * free_dlistint - frees the lists of nodes
 * @head: head of node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
