#include "lists.h"
/**
 * print_dlistint - prints lists
 * @h - head
 *
 * Return: a pointer
 */
size_t print_dlistint(const dlistint_t *h)
{
        int iterate;
        iterate = 0;

        if (h == NULL)
                return (iterate);
        while (h->prev != NULL)
                h = h->prev;
        while (h != NULL)
        {
                printf("%d\n", h->n);
                iterate++;
                h = h->next;
        }
        return (iterate);
}
