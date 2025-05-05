#include "main.h"
/* Copies a string as reg std lib function would */

/**
* *_strncpy - copies a string
*
* @dest: destination var for copied string
* @src: source string
* @n: int, number of bytes to copy
*
* Return: pointer to full string
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *cursor, *origin_ref;

	cursor = dest, origin_ref = src;
	while (*src && src < origin_ref + n)
	{
		*cursor = *src;
		src++;
		cursor++;
	}
	while (cursor < dest + n)
	{
		*cursor = '\0';
		cursor++;
	}
	return (dest);
}
