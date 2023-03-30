#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of structure
 * @h: head of nodes
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
