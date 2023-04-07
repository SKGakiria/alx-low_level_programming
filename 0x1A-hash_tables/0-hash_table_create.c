#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the hash table or null if something is wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_table->array) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
