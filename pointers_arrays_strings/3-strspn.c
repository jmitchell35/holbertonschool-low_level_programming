#include "main.h"
/* Gets length of a prefix substring */

/**
* _strspn - Returns num of bytes in the initial segment of s
* made of accept bytes
*
* @s: pointer to string as parameter
* @accept : reference string
*
* Return: length string segment
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *accept_origin = accept;

	while (*s)
	{
	accept = accept_origin;
	while (*accept)
	{
	if (*s == *accept)
	{
		n++;
		break;
	}
	accept++;
	}
	if (!(*accept))
		goto end_of_function;
	s++;
	}
end_of_function:
	return (n);
}
