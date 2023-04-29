#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list
 * @head: the pointer
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp = *head;

	while (head)
	{
		free(head);
		free(head->str);
		temp = head;
		temp = head->next;
	}
}
