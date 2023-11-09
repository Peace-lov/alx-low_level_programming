#include "lists.h"
/**
 * dlistint_len - length of lists
 * @h: head
 *
 * Return: a pointer
 */
size_t dlistint_len(const dlistint_t *h)
{
        int iterate;
        iterate = 0;

        if (h == NULL)
                return (iterate);
        while (h->prev != NULL)
                h = h->prev;

        while (h != NULL)
        {
                iterate++;
                h = h->next;
        }
        return (iterate);
}
