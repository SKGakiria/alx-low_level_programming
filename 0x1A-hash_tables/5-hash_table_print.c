#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0, count1 = 0, count2 = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			count1++;
			temp = temp->next;
		}
	}

	i = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			count2++;
			printf("'%s': '%s'", temp->key, temp->value);
			if (count2 != count1)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
