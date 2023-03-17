#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concat strings
 * @s1: string
 * @s2: string
 * @n: number of bytes in s2
 *
 * Return: return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y = 0;
	unsigned int len = sizeof(char) * (x + y) + 1;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1)
		x++;
	while (s2)
		y++;

	str = malloc(sizeof(char) * (len));
	if (str == NULL)
	{
		return (NULL);
	}

	if (n >= y)
	{
		n = y;
	}
	for (i = 0; i < x; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		str[x + i] = s2[i];
	}
	str[x + i] = '\0';
	return (str);
}
