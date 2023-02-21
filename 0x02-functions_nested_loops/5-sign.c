#include "main.h"
/**
 * print_sign - print a sign to rep a number
 *
 * @n: the number
 *
 * Return: return 1 if pos and 0 if zero and -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
