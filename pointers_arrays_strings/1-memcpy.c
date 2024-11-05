#include "main.h"
/* Copies memory area */

/**
* _memcpy - copies n bytes from mem area src to mem area dest
*
* @dest: ptr to destination mem area
* @src: source memory area
* @n: unsigned int number of bytes to be copied
*
* Return: pointer to dest mem area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_memory_area = dest;

	while (dest < dest_memory_area + n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest_memory_area);
}
