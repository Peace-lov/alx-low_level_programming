#include "lists.h"
/**
 * sum_dlistint - sum all data in list
 * @head: head of node
 *
 * Return: A number
 */
int sum_dlistint(dlistint_t *head)
{
	int summation;

	summation = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			summation += head->n;
			head = head->next;
		}
	}
	return (summation);
}

