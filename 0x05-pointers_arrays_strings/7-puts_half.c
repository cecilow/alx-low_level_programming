#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - print half
 * @str: string
 * Return: return nothing
 */
void puts_half(char *str)
{
	int i;
	int m;

	if (_strlen(str) % 2 != 0)
	{
		m += 1;
	}
	for (i = (_strlen(str) + m) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
