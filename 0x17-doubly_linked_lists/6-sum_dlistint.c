#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) in dlistint_t.
 * @head: pointer to the list.
 *
 * Return: sum or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
