#include "lists.h"

/**
 * add_dnodeint_end - function that prints all the elements of a list
 * @head: pointer to head of doubly linked list
 * @n: node data
 * Return: number of elements in a list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (!(*head))
	{
		new_node->prev = NULL, new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
		temp_node = temp_node->next;

	new_node->prev = temp_node;
	new_node->next = NULL;
	temp_node->next = new_node;

	return (new_node);
}
