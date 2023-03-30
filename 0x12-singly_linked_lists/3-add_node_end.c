#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds node at the end of list
 * @head: head of node
 * @str: string to add
 * Return: returns address of last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last_node = (*head);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		return (new_node);
	}
}

