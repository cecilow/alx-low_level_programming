#include "main.h"
/**
 * _islower - check if it is lowercase
 *
 * @c: c is the character
 *
 * Return: return 1 it is lowercae
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
