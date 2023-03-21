#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog details function
 * @d: dog pointer
 *
 * Return: return void
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

		if ((*d).age != NULL)
		{
			printf("Age: %d\n", (*d).age);
		}
		printf("Age: (nil)\n");

		if ((*d).owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		printf("Owner: (nil)\n");
	}
	return (0);
}
