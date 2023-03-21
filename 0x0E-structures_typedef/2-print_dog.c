#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog details function
 * @d: dog pointer
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Name: (nil)\n");

		printf("Age: %f\n", (*d).age);

		if ((*d).owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		printf("Owner: (nil)\n");
	}
}
