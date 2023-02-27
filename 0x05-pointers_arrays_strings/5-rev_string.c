#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a sting
 * @s: the string to be rev
 *
 * Return: return zero
 */
void rev_string(char *s)
{
	int i;
	char l;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		l = s[i];
		s[i] = s[_strlen(s) - 1 - i];
		s[_strlen(s) - 1 - i] = l;
	}
}
