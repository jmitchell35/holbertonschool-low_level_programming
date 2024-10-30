#include "main.h"
/* Prints a string, in reverse, followed by NL, to stdout */

/**
* print_rev - swaps values of two integers
*
* @s: string
*
* Return: void
*/

void print_rev(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		ptr++;
	}
	ptr--;
	while (ptr >= s)
	{
		_putchar(*ptr--);
	}
	_putchar(10);
}
