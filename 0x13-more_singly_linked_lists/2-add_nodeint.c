#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a list
 * @head: The pointer to the lists
 * @n: The number of nodes
 *
 * Return: address of new element, Null if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->next = *head;
	NewNode->n = n;
	*head = NewNode;
	return (NewNode);
}
