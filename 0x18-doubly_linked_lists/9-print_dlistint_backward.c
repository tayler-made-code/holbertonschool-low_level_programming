#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements of a list backward
 * @h: pointer to head of doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current->next != NULL)
	{
		current = current->next;
		count++;
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
	return (count);
}
