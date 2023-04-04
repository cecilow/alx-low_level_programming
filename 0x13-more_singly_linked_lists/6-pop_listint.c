#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - takes a node out
 * @head: linked list
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (data);
	}
	temp = *head;
	data = temp->n;
	free(*head);
	*head = temp->next;

	return (data);
}
