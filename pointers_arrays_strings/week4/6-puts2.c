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
	char *ptr = str;

	while (*ptr)
	{
		ptr++;
	}
	while (str <= ptr - 1)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
