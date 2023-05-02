#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: Pointer to the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
