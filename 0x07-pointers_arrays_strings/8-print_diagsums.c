#include "main.h"
/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int A = 0;
	int B = 0;

	for (i = 0; i < size; i++)
	{
		A += a[(i * size) + i];
		B += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", A, B);
}
