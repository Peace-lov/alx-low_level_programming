#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a linked list
 * @head: The pointer
 * @index: index of the list
 *
 * Return: 1 if succeed, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;

	listint_t *presnode = 0;
	unsigned int b = 0;

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (b < index - 1)
	{
		temp = temp->next;
		b++;
	}
	presnode = temp->next;
	temp->next = presnode->next;
	free(presnode);
	return (1);
}
