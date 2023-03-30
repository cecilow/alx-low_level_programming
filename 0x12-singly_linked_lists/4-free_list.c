#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of node
 */

void free_list(list_t *head)
{
	list_t *cont;

	while (head != NULL)
	{
		cont = head->next;
		free(head->str);
		free(head);
		head = cont;
	}
}
