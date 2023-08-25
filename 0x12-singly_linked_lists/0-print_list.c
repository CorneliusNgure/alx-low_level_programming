#include <stdio.h>
#include <string.h>
#include "lists.h"


/**
 * print_list - func to print all elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
