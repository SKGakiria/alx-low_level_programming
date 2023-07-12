#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located, or NULL if
 * value is not present in head or head is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *prev, *jump;

	if (!list || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (prev = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		prev = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, jump->index);

	for (; prev->index < jump->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
