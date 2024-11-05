#include "main.h"
/* Function that prints a string followed by a NL */

/**
* _puts_recursion - prints a string recursively followed by NL
* @s: ptr to beginning of str
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
