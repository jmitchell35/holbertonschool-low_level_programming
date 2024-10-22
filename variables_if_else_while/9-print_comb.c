#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * main function prints all possible combinations of single
 * digit numbers, separated by commas, followed by a space,
 * printed in ascending order.
 * Putchar only (4 times max), main function only
 * No type char variables
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 48;
	int b = 0;

	while (a < 58)
	{
		putchar(a);
		a++;
	if (b < 9)
	{
		putchar(44);
		putchar(32);
		b++;
	}
	}
	putchar(10);
	return (0);
}
