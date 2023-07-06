#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 * the data (n) in a list
 * @head: The pointer
 *
 * Return: if list is empty, 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
