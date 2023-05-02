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

	if (head == NULL)
		return;
	temp = *head;
	if (*head)
	{
		temp = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
