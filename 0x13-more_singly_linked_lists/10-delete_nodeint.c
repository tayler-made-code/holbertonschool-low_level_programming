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

/**
 * delete_nodeint_at_index - deletes the tode at index location
 * @head: pointer to pointer of head of listint_t
 * @index: location of node to be deleted
 * Return: 1 if code succeeds, -1 if code fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *delete;

	if (*head == NULL || index >= listint_len(*head))
		return (-1);

	if (index == 0)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	temp = *head;
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	delete = temp->next;
	temp->next = delete->next;
	free(delete);

	return (1);
}
