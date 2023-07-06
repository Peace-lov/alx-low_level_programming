#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a link
 * @head: The pointer to the list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *high = head;
	listint_t *low = head;

	while (high && low && high->next)
	{
		head = head->next;
		high = high->next->next;
		if (head == high)
		{
			head = low;
			low = high;
			while (1)
			{
				high = low;
				while (high->next != head && high->next != low)
				{
					high = high->next;
				}
				if (high->next == head)
					break;
				head = head->next;
			}
			return (high->next);
		}
	}
	return (NULL);
}
