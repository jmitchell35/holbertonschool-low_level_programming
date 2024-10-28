#include "main.h"
/* Prints numbers from 0 to 9 except 2 and 4 followed by NL */

/**
* print_most_numbers - function definition
*
*
* Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	if (i != 50 && i != 52)
		_putchar(i);

	_putchar(10);
}
