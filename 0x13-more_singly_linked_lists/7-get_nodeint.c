#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t.
 * @head: ptr to listint_t struct.
 * @index: the position of a given node starting from 0.
 *
 * Return: the node or NULL otherwise.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
