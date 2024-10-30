#include "main.h"
/* Reverses a string */

/**
* rev_string - reverses a string
*
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
	char *ptr = s;
	char temp_char;

	while (*ptr)
		ptr++;
	ptr--;
	while (ptr >= s)
	{
		temp_char = *s;
		*s = *ptr;
		*ptr = temp_char;
		ptr--;
		s++;
	}
}
