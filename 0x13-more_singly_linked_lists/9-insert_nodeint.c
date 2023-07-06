#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position.
 * @head: The pointer
 * @idx: index of the list
 * @n: number of lists
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b = 0;
	listint_t *NewNode;
	listint_t *tempnode = *head;

	if (idx != 0)
	{
		for (; b < idx - 1 && tempnode != NULL; b++)
		{
			tempnode = tempnode->next;
		}
	}
	if (tempnode == 0 && idx != 0)
	{
		return (NULL);
	}
	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNode;
	}
	else
	{
		NewNode->next = tempnode->next;
		tempnode->next = NewNode;
	}
	return (NewNode);
}
