#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of a list
 * @h: pointer to head of doubly linked list
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
