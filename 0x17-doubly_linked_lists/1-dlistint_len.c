#include "lists.h"

/**
 * dlistint_len - returns the no. of elements in a list.
 * @h: pointer to the list.
 *
 * Return: no. of elements in doubly-linked dlistint_t.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
