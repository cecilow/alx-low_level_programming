#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print number to 98
 *
 * @n: the starting number
 *
 * @i: integer
 *
 * @j: interger
 *
 * Return: return zero
 */
void print_to_98(int n)
{
	int i;

	int j;

	if (n < 98)
	{
		for (i = n; n <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (j = n; n >= 98; j--)
		{
			printf("%d, ", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
