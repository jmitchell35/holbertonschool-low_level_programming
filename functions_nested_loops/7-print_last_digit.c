#include "main.h"
/* No std libraries allowed => no other headers required */

/**
* print_last_digit - returns last digit of a number
*
* @n: type int arg
*
* Return: int (last digit)
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
* Prototype int print_last_digit(int)
*/

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
