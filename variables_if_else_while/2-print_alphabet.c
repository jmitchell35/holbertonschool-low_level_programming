#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * main function prints the full alphabet and a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
