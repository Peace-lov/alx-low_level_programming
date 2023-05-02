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
	listint_t *tempnode;

	tempnode = *head;
	NewNode = malloc(sizeof(listint_t));
	NewNode->n = n;
	NewNode->next = NULL;
	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNode;
		return (NewNode);
	}

	while (tempnode && b < idx)
	{
		if (b == idx - 1)
		{
			NewNode->next = tempnode->next;
			tempnode->next = NewNode;
		}
		tempnode = tempnode->next;
		b++;
	}
	return (NULL);
}
