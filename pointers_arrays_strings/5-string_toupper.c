#include "main.h"
/* Change lowercase to uppercase */

/**
* string_toupper - change lowercase letters to uppercase.
*
* pointer to string as parameter
*
* Return: pointer to string
*/

char *string_toupper(char *str)
{
	char *origin = str;

	while (*str)
	{
		*str >= 'a' && *str <= 'z' ? *str = *str - 32 : *str;
		str++;
	}
	return (origin);
}
