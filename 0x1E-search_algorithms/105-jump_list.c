#include "search_algos.h"
/**
 * jump_list - a function that searches for a value
 * in a sorted list of integers using the Jump
 * search algorithm.
 * @list: a pointer to the head of lined list
 * @size: the number of nodes in the list to search
 * @value: the value to search
 * Return: a pointer to the first node, otherwise null
 * if not found
 * Description: prints a value every time it is compared
 * in the list. it uses the square root of the list
 * size as the jump step
 */
listint_t *jump_list(listint_t *list, size_t size,
				int value)
{
	size_t stp, stp_sz;
	listint_t *nd, *jp;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	stp_sz = sqrt(size);
	for (nd = jp = list; jp->index + 1 < size &&
				jp->n < value;)
	{
		nd = jp;
		for (stp += stp_sz; jp->index < stp;
				jp = jp->next)
		{
			if (jp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
					jp->index, jp->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
				nd->index, jp->index);

	for (; nd->index < jp->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n",
					nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index,
						nd->n);
	return (nd->n == value ? nd : NULL);
}
