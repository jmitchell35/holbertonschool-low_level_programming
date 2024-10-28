#include "main.h"
/* Prints n underscores followed by NL */

/**
* print_diagonal - function definition
*
* @n: integer
*
* Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		_putchar(10);
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
		_putchar(32);
	_putchar(92);
	_putchar(10);
	}
	}
}
