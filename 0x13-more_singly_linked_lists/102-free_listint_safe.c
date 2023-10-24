#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: a pointer to the head of the list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *slow, *fast;
	int loop_found = 0;

	slow = fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;

		if (slow == fast)
		{
			loop_found = 1;
			break;
		}
	}

	if (loop_found)
	{
		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			node_count++;
			slow = slow->next;
			fast = fast->next;
		}

		printf("-> [%p] %d\n", (void *)slow, slow->n);
		node_count++;
	}

	return (node_count);
}
