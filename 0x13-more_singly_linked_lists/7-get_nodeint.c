#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of
 * a list
 * @head: Pointer
 * @index: index of the node
 *
 * Return: NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	if (!head)
		return (NULL);
	if (temp || count < index)
	{
		temp = temp->next;
		count++;
	}
	return (head);
}
