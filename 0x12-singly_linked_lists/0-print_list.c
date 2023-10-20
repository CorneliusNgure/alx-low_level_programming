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
	size_t nodes;

	nodes = 0;

	while (h)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
