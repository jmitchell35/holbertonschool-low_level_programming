#include "main.h"
/* Function determining if a character is a digit */

/**
* _isdigit - function definition
*
* @c: character
*
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
