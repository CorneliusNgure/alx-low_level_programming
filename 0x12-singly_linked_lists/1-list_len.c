#include <stdio.h>
#include "lists.h"

/**
 * list_len - function with one argument
 * @h:pointer argument to list_s struct
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		count_elements++;
	}

	return (count_elements);
}
