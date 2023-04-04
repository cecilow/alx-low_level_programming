#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees the list
 * @head: head of struct
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
}
