#include "main.h"
/* Capitalizes all words of a string */

/**
* cap_string - capitalizes all words of a string
*
* @str: pointer to string as parameter
*
* Return: pointer to string
*/

char *cap_string(char *str)
{
	char *origin = str;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
								')', '{', '}' };
	int i, ref_mark = 1;

	while (*str)
	{
	for (i = 0; i < 13; i++)
	{
	if (*str == separators[i])
	{
		ref_mark = 1;
		goto increment;
	}
	}
	if (ref_mark == 1 && *str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
		ref_mark = 0;
	}
	else
		ref_mark = 0;
increment:
	str++;
	}
	return (origin);
}
