#include "lists.h"

/**
 * free_dlistint - function that frees list.
 * @head: pointer to head of doubly linked list
 * Return: Always 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
