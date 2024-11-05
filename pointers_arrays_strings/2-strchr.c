#include "main.h"
/* Locates a character in a string */

/**
* _strchr - locates first occurence of char in a str
*
* @s: ptr to string
* @c: char to be located
*
* Return: pointer to first occurence of char
*/

char *_strchr(char *s, char c)
{
	while (*s && c)
	{
	if (*s != c)
		s++;
	else
		return (s);
	}
	return ('\0');
}
