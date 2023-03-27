#include "lists.h"

/**
 * get_dnodeint_at_index -function that returns the nth node
 * of a doubly linked list
 * @head: pointer to head of doubly linked list
 * @index: index of the node, starts at 0
 * Return: Always 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (tmp)
		tmp = tmp->next, count++;

	if (index > (count - 1))
		return (NULL);

	for (count = 0; count < index; count++)
		head = head->next;

	return (head);
}
