#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - array function
 * @min: min
 * @max: max
 *
 *
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min; i < (max - min) + 1; i++)
	{
		array[i] = i;
	}

	return (array);
}

