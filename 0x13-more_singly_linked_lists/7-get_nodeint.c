#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets node at given index
 * @head: linked list at head
 * @index: index of node to grab
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = head;
	while (count != index && temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (count != index)
	{
		return (NULL);
	}
	else
	{
		return (temp);
	}
}
