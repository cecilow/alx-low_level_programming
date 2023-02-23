#include "main.h"
/**
 * print_triangle - print triangle
 *
 * @size: number
 *
 * Return: return zero
 */
void print_triangle(int size)
{
	int i;
	int j;
	int l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i ; j > 0; j--)
			{
				_putchar(' ');
			}
			for (l = 0; l < i; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
