#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list:  pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located, or NULL if
 * value is not present in list or head is NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cur = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	cur = list;
	while (cur && cur->express && cur->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       cur->express->index, cur->express->n);
		cur = cur->express;
	}
	stop = cur;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	/* value potentially lies between two express nodes */
	if (cur->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       cur->express->index, cur->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       cur->index, cur->express->index);
	}

	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       cur->index, stop->index);

	while (cur != stop && cur->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       cur->index, cur->n);
		cur = cur->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       cur->index, cur->n);

	if (cur == stop)
		return (NULL);
	return (cur);
}
