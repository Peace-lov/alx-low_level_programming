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
	unsigned int len = 0;

	for (; str[len] != '\0'; len++)
	
	new = malloc(sizeof(list_t));
	while (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	new = (*head);
	return (*head);
}
