#include "main.h"
/* Determines if number n is prime */

/**
* side_function - makes up for static variable,
* keeps track of incremental progress
* @n: integer originally passed to is_prime_number
* @potential_divisor: int used as incremental variable
* Return: 1 if prime, 0 otherwise
*/

int side_function(int n, int potential_divisor);

int side_function(int n, int potential_divisor)
{
	if (potential_divisor == n)
		return (1);
	else if (n % potential_divisor == 0)
		return (0);
	else
		return (side_function(n, potential_divisor + 1));
}
/**
* is_prime_number - determines if int n is prime number
* @n: integer
* Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (side_function(n, 2));
}
