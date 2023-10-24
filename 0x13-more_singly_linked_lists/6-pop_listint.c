#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node and returns head node's data.
 * @head: double pointer to the head.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		data = (*head)->n;
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}

	return (data);
}
