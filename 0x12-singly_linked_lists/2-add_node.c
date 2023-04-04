#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the front
 * @head: head node
 * @str: string to add
 * Return: returns address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
