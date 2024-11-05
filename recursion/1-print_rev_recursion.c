#include "main.h"
/* Function that prints a string in reverse */

/**
* _print_rev_recursion - prints str recursively in reverse followed by NL
* @s: ptr to beginning of str
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
	if (s == s - 1)
		_putchar('\n');
}
