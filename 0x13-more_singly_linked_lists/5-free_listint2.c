#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: Pointer to the lists
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
