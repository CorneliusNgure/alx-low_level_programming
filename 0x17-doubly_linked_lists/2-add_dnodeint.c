#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of doubly linked list.
 * @head: double pointer to the struct.
 * @n: data.
 *
 * Return: address of the newly added node, NULL otherwise.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
