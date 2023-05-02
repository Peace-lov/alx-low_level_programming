#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked
 * list
 * @head: The pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = 0;
	listint_t *currentnode, *nextnode;

	currentnode = nextnode = *head;
	while (nextnode != 0)
	{
		nextnode = currentnode->next;
		prevnode = currentnode->next;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
