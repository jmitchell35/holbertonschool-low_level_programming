#include "main.h"
/* No std libraries allowed => no other headers required */

/**
* times_table - prints the time tables from 0 to 9
*
*
*
* Return: void
*
* Restrictions:
* All programs will be compiled with gcc
* using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* Only putchar function is allowed (max 5 times, max 5 functions)
* Code should be Betty compliant
* Global variables not allowed
* No more than 5 functions per file
* Standard library not allowed
* We are allowed to use _putchar.c as defined by papamuziko (gh)
*
* Prototype void times_table(void)
*/

void times_table(void)
{
	int lines, columns;

	for (lines = 0; lines < 10; lines++)
	{
	for (columns = 0; columns < 10; columns++)
	{
	if (columns * lines > 9)
		_putchar((columns * lines / 10) + '0');
	else if (columns != 0)
	{
		_putchar(' ');
	}
		_putchar((columns * lines % 10) + '0');
	if (columns < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
		_putchar(10);
	}
}
