#include "main.h"
/* Converts a string to a signed integer */

/**
* _atoi - converts string to integer
*
* @s: pointer to source string to convert
*
* Return: the int
*/
int _atoi(char *s)
{
	int sign_bit = 1, number = 0;

	while (*s && (*s < '0' || *s > '9'))
	{
	if (*s == '-')
		sign_bit = -sign_bit;
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
	if (number > (2147483647 - (*s - '0')) / 10)
	{
		return (sign_bit == 1 ? 2147483647 : -2147483648);
	}
	number = (number * 10) + (*s - '0');
	s++;
	}
	return (sign_bit * number);
}
