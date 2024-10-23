#include "main.h"
/*No std libraries allowed => no other headers required*/

/**
* main - Entry point
*
* Main should print the string _putchar
*
* Restrictions :
* All programs will be compiled with gcc
* using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* Only putchar function is allowed (max 5 times, max 5 functions)
* Code should be Betty compliant
* Global variables not allowed
* No more than 5 functions per file
* Standard library not allowed
* We are allowed to use _putchar.c as defined by papamuziko (gh)
*
* Return: always 0 (success)
*/

int main(void)
{
	char tobeprinted[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	int a = 0;

	while (a < 8)
	{
	_putchar(tobeprinted[a]);
	a++;
	}
	_putchar(10);
	return (0);
}
