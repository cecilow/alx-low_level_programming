#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end of a list.
 * @head: head of node linked list
 * @n: value to put new node at end
 * Return: address of a new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;

		return (new_node);
	}
}
