#include "main.h"
/**
 * print_last_digit - print the last digit of anumber
 *
 * @y: the number
 *
 * Return: return the nubmer
 */
int print_last_digit(int y)
{
	int rem;

	rem = y % 10;
	_putchar('0' + rem);
	return (rem);
}
