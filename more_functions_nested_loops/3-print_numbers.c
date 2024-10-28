#include "main.h"
/* Function that prints the numbers from 0 to 9 followed by NL */

/**
* print_numbers - function definition
*
*
* Return: always 0 (success)
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);

	_putchar(10);
}
