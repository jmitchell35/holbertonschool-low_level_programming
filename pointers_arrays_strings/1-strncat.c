#include "main.h"
/* Concatenates two strings with a byte limit */

/**
* *_strncat - appends src string to dest string adding at most n bytes
*
* @dest: string src is appended to
* @src: string to add to dest
* @n: int, number of bytes to copy
*
* Return: pointer to full string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *cursor;
	char *mark;

	cursor = dest;
	while (*cursor)
		cursor++;
	mark = cursor;
	while (*src && cursor < mark + n)
	{
		*cursor = *src;
		cursor++;
		src++;
	}
	*cursor = '\0';
	return (dest);
}
