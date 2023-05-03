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
	listint_t *presnode;

	unsigned int b = 0;

	presnode = *head;
	if (index != 0)
	{
		for (; b < index - 1 && presnode != 0; b++)
		{
			presnode = presnode->next;
		}
	}
	if (presnode == 0 || (presnode->next == 0 && index != 0))
		return (-1);
	temp = presnode->next;
	if (index != 0)
	{
		presnode->next = temp->next;
		free(temp);
	}
	else
	{
		free(presnode);
		*head = temp;
	}
	return (1);
}
