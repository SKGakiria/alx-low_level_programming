#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in linked list
 * @h: pointer to node passed
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = NULL;

	temp = h;
	while (temp != NULL)
		temp = temp->next, count++;
	return (count);
}
