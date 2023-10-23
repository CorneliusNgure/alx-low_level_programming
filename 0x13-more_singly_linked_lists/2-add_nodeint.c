#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of listint_t struct.
 * @head: double ptr to the listint_t struct.
 * @n: int data in the struct.
 *
 * Return: address of the new element or NULL otherwise.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;

		new_node->next = *head;
		*head = new_node;
	}
	else
		return (NULL);

	return (new_node);
}
