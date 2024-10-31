#include "main.h"
/* Converts a string to a signed integer */

/**
* _atoi - converts string to integer
*
* @s: pointer to source string to convert
*
* Return: the pointeir to dest
*/
int _atoi(char *s)
{
	int sign_bit = 1;
	int number = 0;
	char *left_bound = s;

	while (*left_bound < 48 || *left_bound > 57)
	{
	if (*left_bound == '-')
		sign_bit = -sign_bit;
	left_bound++;
	}
	s = left_bound;
	while (*s >= 48 && *s <= 57)
	{
	if (number > 2147483647 / 10)
		number = 2147483647;
	else
		number = (number * 10) - 48 + *s;
	s++;
	}
	return (sign_bit * number);
}
