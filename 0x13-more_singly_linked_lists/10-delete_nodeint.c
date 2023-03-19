#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the tode at index location
 * @head: pointer to pointer of head of listint_t
 * @index: location of node to be deleted
 * Return: 1 if code succeeds, -1 if code fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *copy;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	copy = *head;

	if (index == 0)
	{
		temp = copy->next;
		free(copy);
		*head = temp;
		return (1);
	}

	while (copy != NULL)
	{
		if (count + 1 == index)
		{
			temp = copy->next;
			copy->next = temp->next;
			free(temp);
			return (1);
		}
		if (copy->next != NULL)
			copy = copy->next;
		count++;
	}
	return (-1);
}
