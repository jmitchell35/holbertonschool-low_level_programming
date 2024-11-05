#include "main.h"
/* Locates a substring */

/**
* _strstr - Returns pointer to the beginning of located substr
*
* @haystack: pointer to string
* @needle : pointer to reference string to be found in haystack
*
* Return: pointer to the beginning of located substr
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{

	const char *h = haystack;
	const char *n = needle;

	while (*h && *n && *h == *n)
	{
		h++;
		n++;
	}
	if (!*n)
		return ((char *)haystack);
	}
	return ('\0');
}
