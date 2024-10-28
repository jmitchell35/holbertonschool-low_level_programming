#include "main.h"
/* Prints a triangle */

/**
* print_triangle - function definition
*
* @size: integer size of base
*
* Return: void
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar(10);
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size - (i + 1); j++)
		_putchar(32);
	for (k = 0; k <= i; k++)
		_putchar(35);
	_putchar(10);
	}
	}
}
