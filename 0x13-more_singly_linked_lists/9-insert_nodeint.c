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

/**
 * insert_nodeint_at_index - inserts node at a given position.
 * @head: pointer to the struct.
 * @idx: the position to insert the new node.
 * @n: data in the new node.
 * Return: addresss of the new node, NULL otherwise.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	current_node = *head;

	while (current_node != NULL && i < (idx - 1))
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
