#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum of linked list
 * @head: head of linked list
 * Return: value of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
