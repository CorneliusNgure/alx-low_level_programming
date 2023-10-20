#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t.
 * @head: double  pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 * 
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str) {
    
	list_t *new_node, *last_node;

	if (str == NULL)
	{
		return (NULL);
	}
	
	new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	
	while (str[new_node->len] != '\0')
	{
		new_node->len++;
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
	}

	return (new_node);
}
