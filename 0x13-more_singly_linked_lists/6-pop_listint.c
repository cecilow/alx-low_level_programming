#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the data of the head node.
 * @head: A pointer to listint_t structure.
 * Return: The dat of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (data);
}
