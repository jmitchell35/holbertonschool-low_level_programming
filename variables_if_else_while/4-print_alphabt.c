#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * main function prints the full lowercase alphabet,
 * except e and q letters, and a new line.
 * Only the putchar function is allowed (2 times)
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
	if (a == 101 || a == 113)
		a++;
	else
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
