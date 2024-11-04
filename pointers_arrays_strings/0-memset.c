#include "main.h"
/* Fills memory with a constant byte */

/**
* _memset - fills the firs tn bytes of memory pointed by ptr with const b
*
* @s: ptr to memory address
* @b: constant byte or character 
* @n: number of bytes to fill with b
*
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *s_memory_area = s;

	while (s < s_memory_area + n)
	{
		*s = b;
		s++;
	}
	return (s_memory_area);
}
