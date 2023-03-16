#include "lists.h"

/**
 * list_len - returns number of elements singly linked list
 * @h: pointer to head of linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int node_num = 0;

	while (h != NULL)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
