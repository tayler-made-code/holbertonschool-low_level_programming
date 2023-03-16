#include "lists.h"

/**
 * add_node - add a new node at the beginning singly linked list
 * @head: point to pointer for head of singly linked list
 * @str: string to add as the new node
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, node_num = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		node_num++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
