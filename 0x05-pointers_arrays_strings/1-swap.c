#include "main.h"
/**
 * swap_int - swap values
 * @a: number
 * @b: number
 *
 * Return: return zero
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
