#include "main.h"
/* Determines if number n is prime */

/**
* is_prime_number - determines if int n is prime number
* @n: integer
* Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	static int potential_divisor = 2;

	if (n <= 1)
		return (0);

	if (potential_divisor == n)
	{
		potential_divisor = 2;
		return (1);
	}
	else if (n % potential_divisor == 0)
	{
		potential_divisor = 2;
		return (0);
	}
	else
	{
		potential_divisor++;
		return (is_prime_number(n));
	}
}
