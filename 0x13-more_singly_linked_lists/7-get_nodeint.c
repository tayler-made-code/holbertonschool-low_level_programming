#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node from linked list
 * @head: pointer to pointer of head of listint_t
 * @index: position to find in list
 * Return: nth node from list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int head_position = 0;

	if (head == 0)
		return (0);

	while (head_position < index)
	{
		if (head == 0)
			return (0);

		head = head->next;
		head_position++;
	}
	return (head);
}
