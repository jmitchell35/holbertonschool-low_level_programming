#include "main.h"
/* Searches a string of any of a set of bytes */

/**
* _strpbrk - Returns pointer to the byte in s that marches or NULL
*
* @s: pointer to string as parameter
* @accept : reference string
*
* Return: pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	char *accept_origin = accept;

	while (*s)
	{
	accept = accept_origin;
	while (*accept)
	{
	if (*s == *accept)
		return (s);
	accept++;
	}
	s++;
	}
	return ('\0');
}
