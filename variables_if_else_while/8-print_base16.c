#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * main function prints the hex digits.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 48;

	while (a < 64)
	{
	if (a < 58)
	{
		putchar(a);
		a++;
	}
	else
	{
		putchar(a + 39);
		a++;
	}
	}
	putchar(10);
	return (0);
}
