#include "lists.h"

/**
 * len_node - return list length
 * @node: pointer to node
 * Return: length of list as unsigned int
 */

unsigned int len_node(dlistint_t **node)
{
	unsigned int len = 0;
	dlistint_t *temp;

	temp = *node;
	while (temp != NULL)
	{
		len = len + 1;
		temp = temp->next;
	}
	return (len);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head of doubly linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;
	unsigned int len = len_node(head);

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		if (temp != NULL)
			temp->prev = NULL;
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
	}
	if (len - 1 == index)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
