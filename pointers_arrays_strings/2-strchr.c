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
	while (*s)
	{
	if (*s == c)
		return (s);
	s++;
	}
	if (c == '\0')
		return (s);
	return ((char *)'\0');
}
