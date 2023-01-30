#include "lists.h"

/**
 * list_len - return no. of elements in linked list
 * @h: linked list
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
