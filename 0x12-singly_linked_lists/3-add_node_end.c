#include "lists.h"
#include <stdlib.h>
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
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	new->next = 
	return (new);
}
