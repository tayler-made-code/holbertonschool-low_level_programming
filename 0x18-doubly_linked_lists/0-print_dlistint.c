#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: pointer to head of doubly linked list
 * Return: number of elements in a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
