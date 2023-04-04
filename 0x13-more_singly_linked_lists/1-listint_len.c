#include <stdio.h>
#include <lists.h>
/**
 * listint_len - length of linked list
 * @h: struct to go through
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
