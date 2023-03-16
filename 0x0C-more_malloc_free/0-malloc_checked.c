#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check malloc
 * @b: bytes
 *
 * Return: return pointer
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b * sizeof(*a));
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
