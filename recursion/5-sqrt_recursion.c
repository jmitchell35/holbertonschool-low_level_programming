#include "main.h"
/* Returns the natural square root of n (int) */

/**
* _sqrt_recursion - returns natural square root of n
* @n: integer
* Return: nat. sq. root of n, -1 if doesn't exist
*/

int _sqrt_recursion(int n)
{
	static int potential_root;

	if (n < 0)
		return (-1);
	if (potential_root * potential_root == n)
	{
		int natural_sqrt_root = potential_root;

		potential_root = 0;
		return (natural_sqrt_root);
	}
	else if (potential_root * potential_root > n)
	{
		potential_root = 0;
		return (-1);
	}
	else
	{
		potential_root++;
		return (_sqrt_recursion(n));
	}
}
