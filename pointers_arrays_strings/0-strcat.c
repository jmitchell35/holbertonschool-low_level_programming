#include "main.h"
/* Concatenates two strings */

/**
* *_strcat - appends src string to dest string
*
* @dest: string src is appended to
* @src: string to add to dest
*
* Return: pointer to full string
*/

char *_strcat(char *dest, char *src)
{
	char *cursor;

	cursor = dest;
	while (*cursor)
		cursor++;

	while (*src)
	{
		*cursor = *src;
		cursor++;
		src++;
	}
	*cursor = '\0';
	return (dest);
}
