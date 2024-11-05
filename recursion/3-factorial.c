#include "main.h"
/* Returns the factorial of a given number */

/**
* factorial - returns the factorial of int n
* @n: integer
* Return: integer, factorial of n
*/

int factorial(int n)
{
	int result = 0;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	result = n * factorial(n - 1);
	return (result);
}
