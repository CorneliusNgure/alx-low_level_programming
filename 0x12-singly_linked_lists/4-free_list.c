#include "lists.h"

/**
 *free_list - frees list_t.
 *@head: Pointer to list_t.
 *
 *Return: void.
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
