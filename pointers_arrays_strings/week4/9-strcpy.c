#include "main.h"
/* Copies string pointed by src to the buffer pointed by dest */

/**
* *_strcpy - copies string to dest buffer
*
* @dest: buffer
* @src: source string
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *right_bound = src;
	char *hopper = dest;

	while (*right_bound)
		right_bound++;
	while (src <= right_bound)
	{
		*hopper = *src;
		src++;
		hopper++;
	}
	return (dest);
}
