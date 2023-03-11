#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 or return 1 for error
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
