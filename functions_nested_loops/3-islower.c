#include "main.h"
/* No std libraries allowed => no other headers required */

/**
* _islower - determines if char is lowercase
*
* @c: type int arg
*
* Return: 1 if c is lowercase, 0 otherwise
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
* Prototype int _alphabet(int c)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
