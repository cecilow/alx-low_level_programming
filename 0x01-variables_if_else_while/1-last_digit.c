#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - functin main
 * Return:this should return zero
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	/*since n stores the random number let us divide by 10 to get the last digit*/
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_dig = n % 10;
	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}
	return (0);
}
