#include "lists.h"

/**
 * listint_len - returns the no. of elements in listint_t.
 * @h: ptr to the listint_t struct.
 *
 * Return: no. of elments in the struct.
 */

size_t listint_len(const listint_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		count_elements++;
	}

	return (count_elements);
}
