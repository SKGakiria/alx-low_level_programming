#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key to be indexed
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (!key)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
