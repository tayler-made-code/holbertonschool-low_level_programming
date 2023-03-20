#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at idx location
 * @head: pointer to pointer of head of listint_t
 * @idx: index of the list where new node should be added (start 0)
 * @n: value of node added
 * Return: nth node from list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
