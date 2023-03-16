#include "lists.h"

/**
 * free_dlistint - function that frees a linked list
 * @head: pointer to head node passed
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *prev = NULL;

	if (!head)
		return;

	temp = head;
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
	}
}
