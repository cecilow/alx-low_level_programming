#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free function
 * @d: dog
 * Return: return void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
