#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of list
 * @head: pointer to head of node passed
 * Return: sum of all the data (n) of list
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
