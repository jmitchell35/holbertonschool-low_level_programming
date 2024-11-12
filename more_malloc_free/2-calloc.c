#include <stdlib.h>
#include "main.h"
/*Function allocates memory for an array*/

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements in the array
  * @size: size of each element in bytes
  * Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	char *temp_ptr = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	temp_ptr = array;
	for (; i < nmemb * size; i++)
		temp_ptr[i] = 0;
	return (array);
}
