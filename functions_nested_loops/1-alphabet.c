#include "main.h"
/* No std libraries allowed => no other headers required */

/**
* print_alphabet - litteraly
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
* Prototype void print_qlphqbet(void)
* Can only use putchar twice
*/

void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
