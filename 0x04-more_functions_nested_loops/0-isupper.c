#include "main.h"
/**
 * _isupper - check for upper case
 *
 * @c: the character
 *
 * Return: return zero
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
