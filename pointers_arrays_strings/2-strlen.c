#include "main.h"
/* Returns the length of a string */

/**
* _strlen - swaps values of two integers
*
* @s: string
*
* Return: int (length of string)
*/

int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length++;
		*s++;
	}
	return (string_length);
}
