#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * main function prints the full lowercase alphabet reversed
 * and a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
