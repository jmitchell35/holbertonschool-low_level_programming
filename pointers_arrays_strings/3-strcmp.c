#include "main.h"
/* Compares two strings as eq from std lib would */

/**
* *_strcmp - compares two strings
*
* @s1: pointer to first string
* @s2: pointer to second
*
* Return: int depending on comparison result
*/

int _strcmp(char *s1, char *s2)
{
	char *src_count = s1, *cmp_count = s2;

	while (*src_count)
		src_count++;
	while (*cmp_count)
		cmp_count++;
	if (src_count + 1 - s1 > cmp_count + 1 - s2)
		return (15);
	else if (src_count + 1 - s1 < cmp_count + 1 - s2)
		return (-15);
	else
		return (0);
}
