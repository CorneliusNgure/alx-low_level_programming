#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current != NULL)
	{
		node_count++;
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;
	return (node_count);
}
