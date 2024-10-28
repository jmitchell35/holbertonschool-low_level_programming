#include "main.h"
/* Prints numbers from 0 to 9 except 2 and 4 followed by NL */

/**
* more_numbers - function definition
*
*
* Return: void
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 15; j++)
	{
	if (j > 9)
		_putchar((j / 10) + '0');

	_putchar((j % 10) + '0');
	}
	_putchar(10);
	}
}
