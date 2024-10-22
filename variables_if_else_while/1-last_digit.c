#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * main function assigns a random number to n.
 * Prints the last digit of n with a text depending
 * on its value
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("The last digit of %d is %d and is 0\n", n, n % 10);
	else
		printf("The last digit of %d is %d and is less than 6 and is not 0\
				\n", n, n % 10);
	return (0);
}
