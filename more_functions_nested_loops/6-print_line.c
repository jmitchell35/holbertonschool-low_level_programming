#include "main.h"
/* Prints numbers from 0 to 9 except 2 and 4 followed by NL */

/**
* print_line - function definition
*
* @n: integer
*
* Return: void
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar(10);
}
