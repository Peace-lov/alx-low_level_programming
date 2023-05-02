#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: Pointer to the list
 *
 * Return: nothing
 */
void free_list(listint_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
