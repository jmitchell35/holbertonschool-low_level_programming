#include "main.h"
/* Returns the natural square root of n (int) */

/**
* side_function - makes up for static variables,
* keeps track of incremental progress
* @n: integer originally passed to _sqrt_recursion
* @potential_root: int used as increment variable passed to function
* Return: root if found, -1 if no root, calls itself to increment
*/
int side_function(int n, int potential_root);

int side_function(int n, int potential_root)
{
	if (potential_root * potential_root == n)
		return (potential_root);
	else if (potential_root * potential_root > n)
		return (-1);
	else
		return (side_function(n, potential_root + 1));
}
/**
* _sqrt_recursion - returns natural square root of n
* @n: integer
* Return: nat. sq. root of n, -1 if doesn't exist
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (side_function(n, 0));
}
