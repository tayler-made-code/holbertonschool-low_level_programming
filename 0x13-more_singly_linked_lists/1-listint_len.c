#include "lists.h"

/**
 * listint_len - count elements
 * @h: pointer to head
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int node_num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
