#include "main.h"
/* Determines if number n is prime */

/**
* is_prime_number - determines if int n is prime number
* @n: integer
* Return: 1 if prime, 0 otherwise
*/

int side_function(int n, int potential_divisor);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (side_function(n, 2));
}

int side_function(int n, int potential_divisor)
{
	if (potential_divisor == n)
		return (1);
	else if (n % potential_divisor == 0)
		return (0);
	else
		return (side_function(n, potential_divisor + 1));
}
