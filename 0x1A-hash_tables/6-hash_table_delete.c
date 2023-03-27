#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: Always 0
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hnode = ht->array[i];
		while (hnode)
		{
			temp = hnode->next;
			free(hnode->key);
			free(hnode->value);
			free(hnode);
			hnode = temp;
		}
	}
	free(ht->array);
	free(ht);
}
