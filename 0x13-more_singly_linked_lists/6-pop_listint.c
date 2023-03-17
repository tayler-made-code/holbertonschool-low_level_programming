#include "lists.h"

/**
 * pop_listint - delete head node and return head node data
 * @head: pointer to pointer of head of listint_t
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (node_data);
}
