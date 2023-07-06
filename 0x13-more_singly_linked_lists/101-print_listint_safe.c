#include "lists.h"
/**
 * free_listz - frees a linked list
 * @head: head of a list
 *
 * Return: nothing
 */
void free_listz(listz_s **head)
{
	listz_s *tp;
	listz_s *pres;

	if (head)
	{
		pres = *head;
		while ((tp = pres) != NULL)
		{
			pres = pres->next;
			free(tp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a linked list
 * @head: the pointer to list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listz_s *nw, *pr, *cu;
	size_t y = 0;

	nw = NULL;
	while (head)
	{
		pr = malloc(sizeof(listz_s));
		if (pr == NULL)
			exit(98);

		pr->z = (void *)head;
		pr->next = nw;
		nw = pr;

		cu = nw;
		while (cu->next != NULL)
		{
			cu = cu->next;
			if (head == cu->z)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listz(&nw);
				return (y);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		y++;
	}
	free_listz(&nw);
	return (y);
}
