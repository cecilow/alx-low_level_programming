#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name function
 * @name: name
 * @f: pointer to function
 * Return: return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
