#include "lists.h"
#include <stdlib.h>
/**
 * add_node - function that adds a new node at
 * the beginning of a list
 * @head: a pointer to pointer
 * @str: a pointer to character string
 *
 * Return: the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	while (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
