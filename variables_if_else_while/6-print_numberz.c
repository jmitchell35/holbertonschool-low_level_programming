#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * main function prints all digits numbers of base 10,
 * starting with 0, followed by a new line.
 * Printf not allowed, putchar only (2 times)
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
