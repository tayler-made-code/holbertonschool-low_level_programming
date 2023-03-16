#include "lists.h"

/**
 * free_list - add a new node at the beginning singly linked list
 * @head: point to pointer for head of singly linked list
 * Return: address of the new element, or NULL if failed
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
