#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an arrray of chars
 * @size: size of array
 * @c: character
 *
 * Return: returns the pointer
 */
char *create_array(unsigned int size, char c)
{

	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (NULL);
	return (ptr);
}
