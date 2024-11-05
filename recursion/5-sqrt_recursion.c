#include "main.h"
/* Returns the natural square root of n (int) */

/**
* _sqrt_recursion - returns natural square root of n
* @n: integer
* Return: nat. sq. root of n, -1 if doesn't exist
*/

int side_function(int n, int potential_root);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return side_function(n, 0);
}

int side_function(int n, int potential_root)
{
	if (potential_root * potential_root == n)
		return (potential_root);
	else if (potential_root * potential_root > n)
		return (-1);
	else
		return (side_function(n, potential_root + 1));
}
