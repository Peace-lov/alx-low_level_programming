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
	listint_t *high;
	listint_t *low;

	while (high && low)
	{
		low = low->next;
		high = high->next->next;
		if (high == low)
		{
			high = low;
			while (high != low)
			{
				high = high->next;
				low = high->next;
			}
			return (high);
		}
	}
	return (NULL);
}
