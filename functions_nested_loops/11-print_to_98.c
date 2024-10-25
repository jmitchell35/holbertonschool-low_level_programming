#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/* std library allowed*/

/**
* print_to_98 - prints all numbers from n to 98
*
* @n: integer
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
*/

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
	if (i <= 98)
		i++;
	else
	{
		i--;
	}
	}
	printf("%d", 98);
	putchar(10);
}
