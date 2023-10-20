#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints members of list_s struct.
 * @h: pointer to struct list_s
 *
 * Return: no. of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
			count_nodes++;
			h = h->next;
	}

	return (count_nodes);
}
