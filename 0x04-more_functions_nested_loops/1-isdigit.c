#include "main.h"
/**
 * _isdigit - check if it is a number
 * @c: number
 *
 * Return: return zero
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
