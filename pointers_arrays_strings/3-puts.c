#include "main.h"
/* Prints a string, followed by NL, to stdout */

/**
* _puts - swaps values of two integers
*
* @str: string
*
* Return: void
*/

void _puts(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
		_putchar(10);
}
