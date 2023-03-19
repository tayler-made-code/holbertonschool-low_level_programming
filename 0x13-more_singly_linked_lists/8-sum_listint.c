#include "lists.h"

/**
 * sum_listint - return the nth node from linked list
 * @head: pointer to pointer of head of listint_t
 * Return: nth node from list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
