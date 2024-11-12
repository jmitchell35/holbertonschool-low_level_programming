#include <stdlib.h>
#include "main.h"
/*Function allocating memory*/

/**
  * malloc_checked - allocates memory
  * @b: unsigned int
  * Return: pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
