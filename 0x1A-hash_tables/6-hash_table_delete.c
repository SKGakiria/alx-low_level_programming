#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *prev = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			prev = temp;
			temp = temp->next;
			free(prev);
		}
		free(temp);
	}
	free(ht->array);
	free(ht);
}
