#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concat two strings
 * @s1: string
 * @s2: string two
 *
 * Return: return pointer
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, len = 0;
	int i, j;
	char *ptr;

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL)
		s1 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	len = x + y;


	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < y; j++)
	{
		ptr[x + j] = s2[j];
	}
	ptr[x + j] = '\0';

	return (ptr);
}
