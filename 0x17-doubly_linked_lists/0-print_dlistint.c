#include "lists.h"

/**
 * print_dlistint - prints all the elements in the list.
 * @h: pointer to the first node.
 *
 * Return: the no. of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}
