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
	unsigned int count = 0;

	while (head != 0)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
