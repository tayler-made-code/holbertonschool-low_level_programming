#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (!(hash_table->array))
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
