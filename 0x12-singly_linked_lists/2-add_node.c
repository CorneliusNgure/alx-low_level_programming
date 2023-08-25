#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t.
 * @head: double pointer to list_t
 * @str: the string to be added to the node.
 *
 * Return: the address of the new element, NULL otherwise.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elem;
	unsigned int count = 0;

	while (str[count])
		count++;

	new_elem = malloc(sizeof(list_t));
	if (!new_elem)
		return (NULL);

	new_elem->str = strdup(str);
	new_elem->count = count;
	new_elem->next = (*head);
	(*head) = new_elem;

	return (*head);
}
