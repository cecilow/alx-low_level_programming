#include <stdio.h>
#include "lists.h"
/**
 * size_t print_listint - prints integers in list
 * @h: of structure type
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
