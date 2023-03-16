#include "lists.h"

/**
 * free_listint - frees memory of list
 * @head: pointer to head of list_t
 * Return: the address of the new element, or NULL if it failed
 */

void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
