#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function to return index
 * @@size: size of array
 * @cmp: function pointer
 *
 * Return: return index of type int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (array != NULL || cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
			if (index)
			{
				return (i);
			}
		}
		return (-1);
	}
}
