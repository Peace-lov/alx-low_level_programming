#include "lists.h"
/**
 * add_node_end - function that adds a new node at the
 * end of a list
 * @head: the pointer to pointer
 * @str: the pointer to a character
 *
 * Return: the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *present = *head;

		while (present->next)
		{
			present = present->next;
		}
		present->next = new;
	}
	return (new);
}
