#include "main.h"
/**
 * rot13 - cipher a text
 * @s: the alphabet
 * Return: return pointer to the alphabet
 */
char *rot13(char *)
{
	char alpha[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char cipher[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = cipher[j];
				break;
			}
		}
	}
	return (s);
}
