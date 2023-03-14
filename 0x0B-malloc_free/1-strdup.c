#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated memory
 * @str: string
 *
 * Return: return a string
 */
char *_strdup(char *str)
{

	char *ptr;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
