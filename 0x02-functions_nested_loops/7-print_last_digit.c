#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - print the last digit of anumber
 *
 * @y: the number
 *
 * Return: return the nubmer
 */
int print_last_digit(int y)
{
	_putchar('0' + _abs(y % 10));
	return (_abs(y % 10));
}
