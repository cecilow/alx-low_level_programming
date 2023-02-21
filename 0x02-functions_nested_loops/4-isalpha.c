#include "main.h"
/**
 * _isalpha - check if it is an alpha
 *
 * @c: the character
 *
 * Return: return 1 if an alpah else zero
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
