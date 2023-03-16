#include "lists.h"

/**
 * free_listint2 - frees memory of a list
 * @head: pointer to head of listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head != 0)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
