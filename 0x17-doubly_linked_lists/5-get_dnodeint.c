#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly-linked list.
 * @head: pointer to the list.
 * @index: position of the node.
 *
 * Return: NULL if the index does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *nth_node = head;

	while (nth_node != NULL)
	{
		if (count == index)
			return (nth_node);

		nth_node = nth_node->next;
		count++;
	}

	return (NULL);
}
