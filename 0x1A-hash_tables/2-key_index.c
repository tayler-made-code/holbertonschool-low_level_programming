#include "hash_tables.h"

/**
 * key_index - returns index of a key
 * @key: key
 * @size: size of array of the hash table
 * Return: pointer to newly created hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
