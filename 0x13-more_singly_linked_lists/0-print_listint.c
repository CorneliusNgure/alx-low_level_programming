#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of the listint_t.
 * @h: the pointer to the listint_t struct.
 *
 * Return: no. of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}

	return (no_of_nodes);
}
