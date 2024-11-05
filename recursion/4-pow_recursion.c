#include "main.h"
/* Returns the value of x raised to the power of y */

/**
* _pow_recursion - returns x to the power of y
* @x: integer, value to raise
* @y: integer, power to raise to
* Return: result of x to the power of y
*/

int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
