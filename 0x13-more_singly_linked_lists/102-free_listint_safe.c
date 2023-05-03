#include "lists.h"
/**
 * free_listzy - frees a linked list
 * @head: the pointer
 *
 * Return: nothing
 */
void free_listzy(listz_s **head)
{
	listz_s *p;
	listz_s *c;

	if (head)
	{
		c = *head;
		while ((p = c) != 0)
		{
			c = c->next;
			free(p);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function that frees a list
 * @h: Pointer to the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lng = 0;

	listz_s *temp, *tp, *nx;
	listint_t *c;

	temp = NULL;
	while (*h)
	{
		tp = malloc(sizeof(listz_s));

		if (!tp)
			exit(98);

		tp->z = (void *)*h;
		tp->next = temp;
		temp = tp;
		nx = temp;

		while (nx->next != 0)
		{
			nx = nx->next;
			if (*h == nx->z)
			{
				*h = NULL;
				free_listzy(&temp);
				return (lng);
			}
		}
		c = *h;
		*h = (*h)->next;
		free(c);
		lng++;
	}
	*h = NULL;
	free_listzy(&temp);
	return (lng);
}
