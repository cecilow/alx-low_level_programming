#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: return zero
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
