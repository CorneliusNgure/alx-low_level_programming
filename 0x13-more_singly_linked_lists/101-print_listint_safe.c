#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints listint_t struct.
 * @head: ptr to the struct.
 *
 * Return: no. of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0, i;
	int loop_found = 0;
	const listint_t **visited_nodes = NULL;
	const listint_t **new_visited_nodes;

	while (head != NULL)
	{
		for (i = 0; i < node_count; i++)
		{
			if (head == visited_nodes[i])
				loop_found = 1;
				break;
		}
		if (loop_found)
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;

		printf("[%p] %d\n", (void *)head, head->n);

		new_visited_nodes = malloc((node_count + 1) * sizeof(listint_t *));

		if (new_visited_nodes == NULL)
		{
			free(visited_nodes);
			exit(98);
		}

		for (i = 0; i < node_count; i++)
		{
			new_visited_nodes[i] = visited_nodes[i];
		}
		new_visited_nodes[node_count] = head;
		free(visited_nodes);
		visited_nodes = new_visited_nodes;
		node_count++;
		head = head->next;
	}
	free(visited_nodes);
	return (node_count);
}
