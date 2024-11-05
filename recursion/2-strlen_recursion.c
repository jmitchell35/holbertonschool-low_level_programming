#include "main.h"
/* Returns length of a str */

/**
* _strlen_recursion - returns length of a str
* @s: ptr to beginning of str
* Return: integer, length of str
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (!*s)
		return (length);
	length += 1 + _strlen_recursion(s + 1);
	return (length);
}
