#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at a given index.
 * @head: ptr to the listint_t.
 * @index: the position of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);

		return (1);
	}

	while (current_node != NULL && i < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
