#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - funciton
 * @old_size: old size
 * @new_size: new size
 * @ptr: pointer
 *
 * Return: return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a, *b;


	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	b = malloc(new_size);
	a = ptr;
	if (old_size > new_size)
	{
		old_size = new_size;
	}
	for (i = 0; i < old_size; i++)
	{
		b[i] = a[i];
	}
	free(ptr);
	return (b);
}
