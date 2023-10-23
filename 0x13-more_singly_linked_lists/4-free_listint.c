#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees every node in the list.
 * @head: ptr to the listint_t.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
