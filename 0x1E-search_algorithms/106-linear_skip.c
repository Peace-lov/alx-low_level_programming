#include "search_algos.h"
/**
 * linear_skip - searches for a value contained
 * in a skip list...
 * @list: a pointer to the head of the skip list
 * to traverse
 * @value: the value to search
 * Return: the pointer on the first node, null if
 * is not found
 */
skiplist_t *linear_skip(skiplist *list, int value)
{
	skiplist_t *tp = NULL, *stp = NULL;

	if (!list)
		return (NULL);

	tp = list;
	while (tp && tp->express && tp->express->n < value)
	{
		printf("Value checked at index [%lu]
			= [%i]\n", tp->express->index,
				tp->express->n);
		tp = tp->express;
	}
	stp = tp;
	while (stp && stp->next != stp->express)
		stp = stp->next;
	if (tp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
			tp->express->index, tp->express->);
		printf("Value found between indexes [%lu] and
			[%lu]\n", tp->index, tp->express->index);
	}
	else
		printf("Value found between indexes [%lu] and
			[%lu]\n", tp->index, stp->index);
	while (tp != stp && tp->n < value)
	{
		printf("Value checked at index [%lu = [%i]\n",
			tp->index, tp->n);
		tp = tp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
		tp->index, tp->n);

	if (tp == stp)
		return (NULL);
	return (tp);
}
