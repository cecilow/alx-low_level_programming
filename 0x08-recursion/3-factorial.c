#include "main.h"
/**
 * factorial - find factorial of a number
 * @n: number
 *
 * Return: return the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
