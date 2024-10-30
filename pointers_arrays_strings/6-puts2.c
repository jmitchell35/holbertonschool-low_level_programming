#include "main.h"
/* Prints every other char of a string, starting with first, and NL */

/**
* puts2 - prints every other char
*
* @str: string
*
* Return: void
*/
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
