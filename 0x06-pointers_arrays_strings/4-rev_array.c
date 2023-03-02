#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of elements to beswapped
 *
 * Return: retunrn nothing
 */
void reverse_array(int *a, int n)
{
	int l;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		l = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = l;
	}
}
