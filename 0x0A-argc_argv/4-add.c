#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * Checkstr - checks string
 * @s: string to check
 * Return: return one if a nmber
 */
int Checkstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0 else one for error
 */
int main(int argc, char  *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (Checkstr(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}
