#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: pointer to head of doubly linked list
 * Return: sum of all
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
