#include "3-calc.h"
/*Contains each operator function's definition*/

/**
  * op_add - add function
  * @a: int, first operand
  * @b: int, second operand
  * Return: int a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtract function
  * @a: int, first operand
  * @b: int, second operand
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - mutiplication function
  * @a: int, first operand
  * @b: int, second operand
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division function
 * @a: int, first operand
 * @b: int, second operand
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - modulo function
  * @a: int, first operand
  * @b: int, second operand
  * Return: a % b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
