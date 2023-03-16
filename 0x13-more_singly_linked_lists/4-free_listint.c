#include "lists.h"

/**
 * free_listint - frees memory of list
 * @head: pointer to head of list_t
 * Return: the address of the new element, or NULL if it failed
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
