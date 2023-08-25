#include <stdlib.h>
#include "lists.h"

/**
 * list_len - func returning number of elements in a linked list
 * @h: pointer to linked list
 *
 * Return: number of elements in ptr address.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
