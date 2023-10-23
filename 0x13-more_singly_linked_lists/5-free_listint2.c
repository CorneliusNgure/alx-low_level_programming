#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees litsint_t using double ptr.
 * @head: double ptr to the listint_t.
 *
 * Return: void.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t current_node;

	while (current_node != NULL)
	{
		current_node = *head;
		*head = (*head)->next;

		free(current_node);
	}
}
