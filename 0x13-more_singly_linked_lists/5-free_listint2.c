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
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != 0)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
