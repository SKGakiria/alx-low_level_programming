#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to be added or updated in key/value
 * @key: key to be added to the hash table
 * @value: corresponding value to the key
 * Return: 1 if it succeedful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	temp  = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!new_node->key || !new_node->value)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
