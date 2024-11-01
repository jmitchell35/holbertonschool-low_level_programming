#include "main.h"
/* Compares two strings as eq from std lib would */

/**
* *_strcmp - compares two strings
*
* @s1: pointer to first string
* @s2: pointer to second
*
* Return: int depending on comparison result
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{	
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
