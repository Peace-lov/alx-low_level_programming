#include "lists.h"
/**
 * function that frees a list
 * @h: Pointer to the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lng = 0;
	int b;
	listint_t = *temp;
	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			b++;
		}
		else
		{
			*h = NULL;
			free(*h);
			b++;
			break;
		}
		*h = NULL;
	}
	return (b);
}
