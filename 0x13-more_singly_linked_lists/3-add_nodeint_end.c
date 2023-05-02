#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a linked list
 * @head: Pointer to the lists
 * @n: Number of lists
 *
 * Return: address of new element, NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *tempnode;

	tempnode = *head;
	NewNode = malloc(sizeof(listint_t));

	if (!NewNode)
		return (NULL);
	NewNode->n = n;
	NewNode->next = NULL;
	if (!*head)
	{
		*head = NewNode;
		return (NewNode);
	}
	while (tempnode->next)
		tempnode = tempnode->next;
	tempnode->next = NewNode;
	return (NewNode);
}
