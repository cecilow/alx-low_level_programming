#include <stdio.h>
/**
 * main - function description 
 * Return: return 0
 */
int main(void)
{
	char charType;
	int IntegerType;
	long int x;
	long long int y;
	float FloatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(IntegerType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(y));
	printf("Size of a float: %zu byte(s)\n", sizeof(FloatType));
	return (0);
}
