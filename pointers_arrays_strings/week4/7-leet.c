#include "main.h"
/* Encode a string into 1337 aka leet */

/**
* leet - encodes string into leet
*
* @str: pointer to string as parameter
*
* Return: pointer to string
*/

char *leet(char *str)
{
	char *origin = str;
	char to_be_changed[10] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char substitutes[5] = {52, 51, 48, 55, 49};
	int i;

	while (*str)
	{
	for (i = 0; i < 10; i++)
	{
	if (*str == to_be_changed[i])
		*str = substitutes[i / 2];
	}
	str++;
	}
	return (origin);
}
