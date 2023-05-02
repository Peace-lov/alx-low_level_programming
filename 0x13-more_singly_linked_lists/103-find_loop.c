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
		low = low->next;
		high = high->next->next;
		if (high == low)
		{
			head = high;
			high = low;
			while (1)
			{
				low = high;
				while (low->next != head && low->next != high)
				{
					low = low->next;
				}
				if (low->next == head)
					break;
				head = head->next;
			}
			return (low->nex);
		}
	}
	return (NULL);
}
