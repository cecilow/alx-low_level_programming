#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print number to 98
 *
 * @n: the starting number
 *
 * Return: return zero
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (int i = n; n <= 98; i++)
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
		for (int j = n; n >= 98; j--)
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
