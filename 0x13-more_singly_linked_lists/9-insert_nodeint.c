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
	unsigned int count = 0;

	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (0);

			else
			{
				new->n = n;
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		count++;
	}
	return (NULL);
}
