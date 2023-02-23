#include "main.h"
/**
 * _isupper - check for upper case
 * @c: the character
 *
 * Return: return zero
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
