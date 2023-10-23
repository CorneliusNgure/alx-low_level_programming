#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end of listint_t.
 * @head: double pointer to the listint_t.
 * @n: int data in listint_t struct.
 *
 * Return: address of the new element, NULL otherwise.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node ==  NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}

		current_node->next = new_node;
	}

	return (new_node);
}
