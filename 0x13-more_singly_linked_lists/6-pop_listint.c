#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 * a linked list
 * @head: The pointer to list
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *f;
	int b;

	if (!head)
		return (0);
	temp = *head;

	if (*head != NULL)
	{
		b = temp->n;
		f = temp->next;
		free(temp);
		*head = f;
	}
	return (b);
}
