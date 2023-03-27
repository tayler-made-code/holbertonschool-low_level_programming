#include "lists.h"

/**
 * add_dnodeint - function that prints all the elements of a list
 * @head: pointer to head of doubly linked list
 * @n: node data
 * Return: number of elements in a list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_node = NULL, *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	temp_node = *head;
	*head = new_node;
	new_node->next = temp_node;

	if (temp_node != NULL)
		temp_node->prev = *head;

	return (new_node);
}
