#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - print eevery other character
 * @str: string
 * Return: return zero
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
