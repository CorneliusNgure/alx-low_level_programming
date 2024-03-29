#include "lists.h"

/**
 * sum_listint - returns the sum of data in listint_t.
 * @head: ptr to the struct.
 *
 * Return: sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
