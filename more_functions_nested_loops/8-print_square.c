#include "main.h"
/* Prints a square with sides of n char followed by NL */

/**
* print_square - function definition
*
* @size: integer size of sides
*
* Return: void
*/

void print_square(int size)
{
	int i, j;

	if (size == 0 || size < 0)
		_putchar(10);
	else
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
		_putchar(35);
	_putchar(10);
	}
}
