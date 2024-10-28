#include "main.h"
/* Function determining if c is uppercase letter */

/**
* _isupper - Entry point of the function
*
* @c: character
*
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
