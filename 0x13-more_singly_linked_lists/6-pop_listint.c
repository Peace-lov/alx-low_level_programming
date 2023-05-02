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
	listint_t *temp;
	int b;

	if (head == NULL)
		return (0);
	if (head != NULL || *head != NULL)
	{
		b = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (b);
}
